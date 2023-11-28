#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: name of the file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	int written; /* number of bytes written */
	int perms = 0600; /* file permissions rw------- */

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, perms);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	/* Calculate the length of text_content */
	for (written = 0; text_content[written]; written++)
		;

	written = write(fd, text_content, written);

	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

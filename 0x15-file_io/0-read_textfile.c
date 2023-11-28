#include "main.h"

/**
 * read_text_file - reads a text file and prints to POSIX stdout
 * @file_path: path to the file to read
 * @num_chars: number of characters it should read and print
 *
 * Return: the actual number of characters it could read and print
 */
ssize_t read_text_file(const char *file_path, size_t num_chars)
{
	int fd;
	ssize_t read_count, write_count;
	char *read_buffer;

	if (file_path == NULL)
		return (0);

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (0);

	read_buffer = malloc(sizeof(char) * num_chars);
	if (read_buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, read_buffer, num_chars);
	close(fd);
	if (read_count == -1)
	{
		free(read_buffer);
		return (0);
	}

	write_count = write(STDOUT_FILENO, read_buffer, read_count);
	free(read_buffer);
	if (read_count != write_count)
		return (0);

	return (write_count);
}

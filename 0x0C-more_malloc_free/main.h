#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* For malloc, free, and exit */
#include <string.h>

/* Function Prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_H */

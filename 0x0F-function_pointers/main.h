#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* MAIN_H */

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int);
void *_calloc(unsigned int, unsigned int);
char *_memset(char *, char, unsigned int);
int *array_range(int, int);

#endif

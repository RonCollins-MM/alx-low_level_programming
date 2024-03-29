#ifndef MAIN_H
#define MAIN_H

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *next_char(char *, char*);
char *_strstr(char *, char *);
void print_chessboard(char (*)[8]);
int _putchar(char);
void print_diagsums(int *, int);

#endif

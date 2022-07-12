#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

#define BUFFSIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int fs_int(long int n);
int print_str(char *str);
int fs_binary(unsigned int num);
int fs_unknown_spec(char c);
int fs_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int fs_S(char *);
int fs_reverse(char *s);
int fs_rot13(char *c);
int fs_pointer(void *p);

#endif

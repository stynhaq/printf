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
int int_fs(long int n);
int print_str(char *str);
int print_binary(unsigned int num);
int print_unknown_spec(char c);
int print_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int print_S(char *);
int print_reverse(char *s);
int print_rot13(char *c);
int print_pointer(void *p);

#endif

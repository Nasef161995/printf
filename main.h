#ifndef MAIN_H
#define MAIN_H
/* Start import the lib*/
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/* Define STRING */
#define STRING ((str) ? str : "(null)")
/* Create the functions  */
int _printf(const char *format, ...);
int _my_putchar(char c);
int _my_putstr(char *s);
void _my_putint(int n);
int _num_length(int n);
int _check(char c, va_list args);
int _myprint_binary(unsigned int n);
int _printf_srev(va_list args);

#endif

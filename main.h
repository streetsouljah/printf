#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct reference - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct reference
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list value);
int printf_hex_aux(unsigned long int number);
int printf_HEX_aux(unsigned int number);
int printf_exclusive_string(va_list value);
int printf_HEX(va_list value);
int printf_hex(va_list value);
int printf_oct(va_list value);
int printf_unsigned(va_list arguments);
int printf_bin(va_list value);
int printf_srev(va_list arguments);
int printf_rot13(va_list arguments);
int printf_int(va_list arguments);
int printf_dec(va_list arguments);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list value);
int printf_string(va_list value);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

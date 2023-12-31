#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define F_PLUS 2
#define F_HASH 8
#define F_SPACE 16
#define S_SHORT 1
#define F_MINUS 1
#define F_ZERO 4
#define S_LONG 2

/**
 * struct format - match the conversion specifiers
 * @id: type char pointer of the specifier i.e (l, h)
 * @f: type pointer to function
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_binary(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list types, char buffer[],
	int size, int width, int flags, int precision);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

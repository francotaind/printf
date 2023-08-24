#include "main.h"
#include <stdarg.h>
/**
 * printf_char - prints a char.
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: numbers of char printed
 */
int printf_char(va_list types, char[],
		int flags, int width, int size, int precision)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, width, flags, precision, size));
}

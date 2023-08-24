#include "main.h"
/**
 * printf_rot13 - prints string to rot13
 * @types: lists of arguments
 * @buffer: buffer array to handle print
 * @flags: claculates active flags
 * @size: size specifier
 * @width: get width
 * @precision: precision specification
 * Return: number of chars printed
 */
int printf_rot13(va_list args, char[],
		int size, int flags, int precision, int width)
{
	char x;
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char out[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	str = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(flags);
	UNUSED(size);

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				x = out[j];
				write(1, &x, 1);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			x = str[i];
			write(1, &x, 1);
			count++;
		}
	}
	return (count);
}

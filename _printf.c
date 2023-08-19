#include "main.h"

/**
 * _printf - Prints a formated string to the stdout.
 * @format: Const string to be printed to output.
 *
 * Return: Number of charaters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int count, i;
	va_list f_spec;

	va_start(f_spec, format);
	for(i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			count += write(1, (format + i), 1);
	}



	va_end(f_spec);
	return (count);
}

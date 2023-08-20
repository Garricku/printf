#include "main.h"

/**
 * _printf - Prints a formated string to the stdout.
 * @format: Const string to be printed to output.
 *
 * Return: Number of charaters printed.
 */

int _printf(const char *format, ...)
{
	/* count to store count chars printed, i for iteration */
	unsigned int count, i, j = 0, flag = 0;
	char specs[] = "cs%di";
	va_list f_spec;
	/*function pointer to receive function for printing specific case*/
	int (*fptr)(va_list);

	if (format == NULL)
		return (-1);

	va_start(f_spec, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			while (specs[j])
			{
				if (format[i + 1] == specs[j])
					flag = 1;
				j++;
			}
			if (flag)
			{
				/*get appropriate function for specified format specifier*/
				fptr = select_fun(format[i + 1]);
				if (fptr == NULL)
					return (-1);
				/*prints, return no. of cars printed and adds it to count variable*/
				count += fptr(f_spec);
			}
			else
				count += write(1, &format[i], 1);
		}
		else
			count += write(1, &format[i], 1);
		
	}



	va_end(f_spec);
	return (count);
}

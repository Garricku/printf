#include "main.h"

/**
 * prnt_char - prints a character.
 * @f_spec: va_list variable..
 *
 * Return: returns the count of chars printed.
 */
int prnt_char(va_list f_spec)
{
	char c = va_arg(f_spec, int);

	return (write(1, &c, 1));
}

/**
 * prnt_str - prints a string
 * @f_spec: va_list variable..
 *
 * Return: returns the count of chars printed.
 */
int prnt_str(va_list f_spec)
{
	unsigned int length = 0;
	char *str = va_arg(f_spec, char *);

	while (str[length] != '\0')
		length++;
	return (write(1, str, length));
}

/**
 * prnt_pec - prints percent symbols.
 * @f_spec: va_list variable..
 *
 * Return: return the number of chars printed.
 */
int prnt_pec(va_list __attribute__((__unused__))f_spec)
{
	char c = '%';

	return (write(1, &c, 1));
}

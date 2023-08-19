#include "main.h"

/**
 * select_func - Selects a function to decide what it prints.
 * @spec: The specifier recieved from _printf.
 *
 * Return: The proper function needed for the formatted string.
 */

int (*select_func(char *spec))(va_list)
{
	int i;

	spec_op ptrS[] = {
		{"c", prnt_char},
		{"s", prnt_str},
		{"%", prnt_pec},
		{"d", prnt_dec},
		{"i", prnt_int},
		{NULL, NULL}
	};

	for (i = 0; ptrS[i].sp != NULL, i++)
	{
		if ((*(ptrS[i].sp) == *spec) && (*(spec + 1) == '\0'))
			return (ptrS[i].func);
	}
}

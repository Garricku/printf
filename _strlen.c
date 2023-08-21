#include "main.h"

/**
 * _strlen - computes length of str
 * @s: the str
 *
 * Return: lenght of str
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	for (i = 0; s[i]; i++)
		;
	return (i);
}

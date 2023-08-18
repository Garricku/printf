/**
 * prnt_char - prints a character.
 * @ptr: address of the character.
 *
 * Return: returns the count of chars printed.
 */
int prnt_char(*ptr)
{
	return (write(1, ptr, 1));
}

/**
 * prnt_str - prints a string
 * @ptr: address of string to be printed
 *
 * Return: returns the count of chars printed.
 */
int prnt_str(*ptr)
{
	unsigned int length;

	length = strlen(ptr);
	return (write(1, ptr, length));
}

/**
 * prnt_pec - prints percent symbols.
 * @ptr: the address of pec.
 *
 * Return: return the number of chars printed.
 */
int prnt_pec(*ptr)
{
	char c = '%';

	ptr = &c;
	return (write(1, ptr, 1));
}

/**
 * prnt_dec - prints decimals
 * @ptr: addres of num to be printed.
 *
 * Return: returns the number of chars printed.
 */
int prnt_dec(*ptr)
{
	return (write(1, ptr, length));
}

/**
 * prnt_int - prints an integer
 * @ptr: the address of integer to be printed
 *
 * Return: returns the number of counts.
 */
int prnt_int(*ptr)
{
	return (write(1, ptr, length));
}

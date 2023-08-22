/**
 * prnt_octa - Prints an octal address.
 * f_spec - va_list arguments.
 * Return: An octal address.
 */

int prnt_octa(va_list f_spec)
{
	int n = va_arg(f_spec, int);
	int strt = n;
	int result, count;

	if (n >= 1)
	{
		count[i--] = '0';
	}

	count[f_spec] = '\0';

	while (n >= 1)
	{
		result = (n % 8) + '0';
		n /= 8;
	}

	if (strt != 0)
	{
		count[i--] = '0';
	}

	i++;

	return (write(0, result, i));
}
/**
 * prnt_hexa - Prints a low case hexadecimal num.
 * f_spec: The various arguments.
 *
 * Return: Num of characters. 
 */

int prnt_hexa(va_list f_spec)
{
	return (prnt_hexa(f_spec, "0123456789abcdef"));
}

/**
 * prnt_hexa_up - Prints a number in up case hexadecimal.
 * @f_spec: Arguments for getting the hex values in uppercase.
 *
 * Return: Number of chars printed.
 */

int prnt_hexa_up(va_list f_spec)
{
	return (prnt_hexa_up(f_spec, "0123456789ABCDEF"));
}

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
 * @f_spec: All the arguments.
 *
 * Return: Number of chars printed.
 */

int prnt_hexa_up(va_list f_spec)
{
	return (prnt_hexa_up(f_spec, "0123456789ABCDEF"));
}
/**
 * prnt_hex - Prints a hexadecimal number in low or up case.
 * @f_spec: Args for getting the hex.
 *
 * Return: Number of chars printed.
 */

int prnt_hex(va_list f_spec)
{
	int n = va_arg(f_spec, int);
	int strt = n;

	if (n == 0)
	{
		f_spec[i--] = '0';
	}

	while (n != 0 && n > 0)
	{
		f_spec[i--] = [n % 16];
		n /= 16;
	}

	if (strt_n != 0)
	{
		f_spec[i--] = sp[i];
		f_spec[i--] = '0';
	}

	i++;

	return (write(1, f_spec, sp[i]));
}

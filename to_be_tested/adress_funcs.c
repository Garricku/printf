/**
 * prnt_octa - Prints an octal address for %o specifier.
 * @f_spec: Va_list arguments from f_spec.
 *
 * Return: The count for the octal address.
 */

int prnt_octa(va_list f_spec)
{
	int n = va_arg(f_spec, int);
	int strt = n;
	int result, count;

	/*not sure about this, sorry*/

	/*trying to get base 8 here*/
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
	/*this does not work properly*/
	return (write(0, result, i));
}
/**
 * prnt_hexa - Prints a low case hexadecimal num.
 * @f_spec: The va_list arguments to be used.
 *
 * Return: The count of the characters for hexa address.
 */

int prnt_hexa(va_list f_spec)
{
	/*not sure how to get this to work*/
	/*need to try working on this later*/
	return (prnt_hexa(f_spec, "0123456789abcdef"));
}

/**
 * prnt_hexa_up - Prints a number in up case hexadecimal.
 * @f_spec: Arguments for getting the hex values in uppercase.
 *
 * Return: Count of the chars for the hexadecimal address.
 */

int prnt_hexa_up(va_list f_spec)
{
	/*it is still incomplete do not add to main code*/
	/*trying to create the base 16 charaters*/
	return (prnt_hexa_up(f_spec, "0123456789ABCDEF"));
}

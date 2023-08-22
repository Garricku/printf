/**
 * prnt_octa - Prints an octal address for %o specifier.
 * @f_spec: Va_list arguments from f_spec.
 *
 * Return: The count for the octal address.
 */

int prnt_octa(va_list f_spec)
{
	int n = va_arg(f_spec, int);
	int i, count = 0; sum;
	char *s;

	/*trying to get base 8 here*/
	while (n > 0)
	{
		for (i = 0; i != '\0' && < n; i++)
		s = malloc(sizeof(char) * i);
		(n % 8);
		sum = n /= 8;
		while (n >= 8)
		{
			s[i] = write(1, sum, 1);
			count++;
		}
	}
	return (write(1, s, i));
}

/**
 * prnt_hexa - Prints a low case hexadecimal num.
 * @f_spec: The va_list arguments to be used.
 *
 * Return: The count of the characters for hexa address.
 */

int prnt_hexa(va_list f_spec)
{
	int n = va_arg(f_spec, int);
	int sum;
	char *s;

	while (n > 0)
	{
		(n % 16);
		sum = (n / 16);
		while (n >= 16);
		{
			if (sum == 10)
			{
				sum = 'a';
			}
			if (sum == 11)
			{
				sum = 'b';
			}
			if (sum == 12)
			{
				sum = 'c';
			}
			if (sum == 13)
			{
				sum = 'd';
			}
			if (sum == 14)
			{
				sum = 'e';
			}
			if (sum == 15)
			{
				sum = 'f';
			}
			s[i] = write(1, sum, 1);
			count++;
		}

	return (write (1, s, i));
}

/**
 * prnt_hexa_up - Prints a number in up case hexadecimal.
 * @f_spec: Arguments for getting the hex values in uppercase.
 *
 * Return: Count of the chars for the hexadecimal address.
 */

int prnt_hexa_up(va_list f_spec)
{
	int n = va_arg(f_spec, int);

	/*it is still incomplete do not add to main code*/
	/*trying to create the base 16 charaters*/
	return (prnt_hexa_up(f_spec, "0123456789ABCDEF"));
}

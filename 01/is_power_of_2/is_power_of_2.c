int is_power_of_2 (unsigned int n)
{
	int	res;

	res = n;
	if (n == 1)
		return (1);
	while (res >= 2)
	{
		while (res % 2 == 0)
			res /= 2;
		if (res == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}

/* #include <stdio.h>
int	main (void)
{
	printf("%i", is_power_of_2(32));
} */
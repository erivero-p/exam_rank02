#include <stdlib.h>
#include <stdio.h>

int	ft_pgcd(int a, int b)
{
	int pgcd;

	if (a < b)
		pgcd = a;
	else
		pgcd = b;

	while (pgcd > 0)
	{
		if (a % pgcd == 0 && b % pgcd == 0)
			return (pgcd);
		pgcd--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a > 0 && b > 0 && ft_pgcd(a, b) != 0)
			printf("%i", ft_pgcd(a, b));
	}
	printf("\n");
	return (0);
}
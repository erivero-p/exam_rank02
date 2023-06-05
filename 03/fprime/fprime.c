int	ft_is_prime(int num)
{
	int i;

	i = 2;
	while (i <= num / i)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_fprime(int num)
{
	int	p;
	int	c;

	p = 2;
	while (p <= num)
	{
		if (ft_is_prime(p) == 1 && num % p == 0)
		{
			printf("%i", p);
			if (num / p != 1)
				printf ("*");
			num /= p;
			p--;
		}
		p++;
	}
}

int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
		num = atoi (av[1]);
		ft_fprime(num);
	}
	printf("\n");
}

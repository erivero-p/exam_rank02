#include <unistd.h>

int	ft_atoi(char *num)
{
	int	i;
	int	sg;
	int	res;

	i = 0;
	sg = 1;
	res = 0;
	while (num[i] == 32 || num[i] >= 9 && num[i] <= 13)
		i++;
	if (num[i] == '+')
		i++;
	else if (num[i] == '-')
	{
		sg = -1;
		i++;
	}
	while (num[i])
	{
		res = res * 10 + num[i] - 48;
		i++;
	}
	return (res * sg);
}

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 0)
		return (0);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putunsigned(int num)
{
	if (num > 9)
		ft_putunsigned(num / 10);
	ft_putchar(num % 10 + 48);
}

int	main(int argc, char **argv)
{
	int	num;
	int	i;
	int	res;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		i = 2;
		res = 0;
		while (i <= num)
		{
			if (ft_is_prime(i) == 1)
				res += i;
			i++;
		}
		ft_putunsigned(res);
	}
	else if (argc != 2 || num < 0)
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

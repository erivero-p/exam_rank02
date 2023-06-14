#include <unistd.h>

int	ft_atoi_s(char *num)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (num[i] >= '0' && num[i] <= '9')
	{
		res = res * 10 + num[i] - 48;
		i++;
	}
	return (res);
}

void	ft_print_unsigned(int a)
{
	char	c;

	if (a >= 10)
		ft_print_unsigned(a / 10);
	c = a % 10 + 48;
	write (1, &c, 1);
}

void ft_tab_mult(int a, int b)
{
	int c;

	c = a * b;
	ft_print_unsigned(a);
	write(1, " ", 1);
	write(1, "x", 1);
	write(1, " ", 1);
	ft_print_unsigned(b);
	write(1, " ", 1);
	write(1, "=", 1);
	write(1, " ", 1);
	ft_print_unsigned(c);
}

int	main(int ac, char **av)
{
	int i;
	int num;

	if (ac == 2)
	{
		i = 1;
		num = ft_atoi_s(av[1]);
		while (i < 10)
		{
			ft_tab_mult(i, num);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}

/* int	main (void)
{
	ft_print_unsigned(108);
} */
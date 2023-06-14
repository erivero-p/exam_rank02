#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void str_capitalizer(char *str)
{
	int		i;
	char	c;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		ft_putchar(str[i] - 32);
	else
		ft_putchar(str[i]);
	i++;
	while (str[i])
	{
		c = str[i];
		if (str[i - 1] <= 32 && str[i] >= 'a' && str[i] <= 'z')
			c -= 32;
		else if (str[i - 1] > 32 && str[i] >= 'A' && str[i] <= 'Z')
			c += 32;
		ft_putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			str_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}

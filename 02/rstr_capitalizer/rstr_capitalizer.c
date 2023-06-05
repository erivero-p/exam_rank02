#include <unistd.h>

void	ft_rstr_capitalizer(char *str)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i + 1] <= 32 && str[i] >= 'a' && str[i] <= 'z')
			c -= 32;
		else if (str[i + 1] > 32 && str[i] >= 'A' && str[i] <= 'Z' )
			c += 32;
		write(1, &c, 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	unsigned int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}

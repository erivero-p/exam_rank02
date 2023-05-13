#include <unistd.h>

void	ft_ulstr(char *str)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			c -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c += 32;
		write (1, &c, 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_ulstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}

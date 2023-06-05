#include <unistd.h>

void	ft_expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= 32 && str[i] > 0)
		i++;
	while (str[i])
	{
		if (str[i] > 32)
			write (1, &str[i], 1);
		if (str[i] <= 32 && str[i] != 0)
		{
			while (str[i] <= 32 && str[i] != 0)
				i++;
			if (str[i] > 32)
				write(1, "   ", 3);
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_expand_str(av[1]);
	}
	write (1, "\n", 1);
}

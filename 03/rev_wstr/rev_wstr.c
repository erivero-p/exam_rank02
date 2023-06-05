#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
		i++;
	while (i-- > 0)
	{
		j = i;
		if (str[i] <= 32 || i == 0)
		{
			if (i != 0)
				j++;
			while (str[j] != 32 && str[j] != '\0')
			{
				write(1, &str[j], 1);
				j++;
			}
			if (str[i] <= 32)
				write(1, &str[i], 1);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}

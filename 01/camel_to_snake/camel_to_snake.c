#include <unistd.h>

void ft_camel_to_snake(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &c, 1);
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c += 32;
			write(1, "_", 1);
			write(1, &c, 1);
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_camel_to_snake(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
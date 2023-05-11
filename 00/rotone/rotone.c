#include <unistd.h>

char ft_rotone(char c)
{
	if (c >= 'a' && c < 'z')
		c += 1;
	else if (c == 'z')
		c = 'a';
	if (c >= 'A' && c < 'Z')
		c += 1;
	else if (c == 'Z')
		c = 'A';
	return (c);
}

int	main	(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = ft_rotone(argv[1][i]);
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
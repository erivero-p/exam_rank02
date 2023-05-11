#include <unistd.h>

char	rot_13(char c)
{
	if (c >= 'a' && c <= 'm')
		c += 13;
	else if (c > 'm' && c <= 'z')
		c = 'a' + (12 - ('z' - c));
	if (c >= 'A' && c <= 'M')
		c += 13;
	else if (c > 'M' && c <= 'Z')
		c = 'A' + (12 - ('Z' - c));
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = rot_13(argv[1][i]);
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
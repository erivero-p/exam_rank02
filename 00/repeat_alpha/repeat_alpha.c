#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = argv[1][i] - 64;
			else
				c = 1;
			while (c-- > 0)
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

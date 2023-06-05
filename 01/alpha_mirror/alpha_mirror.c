#include <unistd.h>

char ft_alpha_mirror(char c)
{
	char m;

	m = c;
	if (c >= 'a' && c <= 'z')
		m = 'z' - (c - 'a');
	if (c >= 'A' && c <= 'Z')
		m = 'Z' - (c - 'A');
	return (m);
}

int	main(int ac, char **av)
{
	int	i;
	char m;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			m = ft_alpha_mirror(av[1][i]);
			write (1, &m, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
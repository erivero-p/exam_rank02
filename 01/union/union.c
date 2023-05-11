#include	<unistd.h>

int ft_union1(char c, char *s1, int index)
{
	int	i;

	i = 0;
	while (s1[i] && i < index)
	{
		if (c == s1[i])
			return (0);
		i++;
	}
	i = 0;
	return (1);
}

int ft_union2(char c, char *s1, char *s2, int index)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (c == s1[i])
			return (0);
		i++;
	}
	i = 0;
	while (s2[i] && i < index)
	{
		if (c == s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	main (int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_union1(argv[1][i], argv[1], i))
				write (1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_union2(argv[2][i], argv[1], argv[2], i))
				write (1, &argv[2][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
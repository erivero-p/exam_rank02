#include <unistd.h>

void search_and_replace(char	*str, char a, char b)
{
	char			c;
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] == a)
			c = b;
		write (1, &c, 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write (1, "\n", 1);
	return (0);
}

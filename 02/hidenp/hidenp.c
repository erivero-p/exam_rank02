#include <unistd.h>

int	ft_hidenp(char *str, char *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == p[j])
			j++;
		i++;
	}
	if (p[j] == '\0')
		return (1);
	return (0);
}

int main (int argc, char **argv)
{
	char	c;

	c = '0';
	if (argc == 3)
	{
		if (ft_hidenp(argv[2], argv[1]) == 1)
			c = '1';
		write(1, &c, 1);
	}
	write (1, "\n", 1);
	return (0);
}

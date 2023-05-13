#include <unistd.h>

void ft_rev_print(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	while (i-- > 0)
		write(1, &str[i], 1);

}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_print(av[1]);
	}
	write (1, "\n", 1);
}
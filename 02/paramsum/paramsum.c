#include <unistd.h>

void	ft_putunsigned(int num)
{
	char	c;

	if (num > 9)
		ft_putunsigned(num / 10);
	c = num % 10 + 48;
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putunsigned(ac - 1);
	write (1, "\n", 1);
}
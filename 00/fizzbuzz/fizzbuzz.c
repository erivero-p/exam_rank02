#include <unistd.h>

void print_num(int	n)
{
	char c;
	if (n < 10)
	{
		c = n + 48;
		write (1, &c, 1);
	}
	if (n > 9 && n < 100)
	{
		c = n / 10 + 48;
		write (1, &c, 1);
		c = n % 10 + 48;
		write (1, &c, 1);
	}
}

int main(void)
{
	int		n;
	char	c;


	n = 0;
	while (n++ < 101)
	{
		c = n + 48;
		if (n % 3 == 0 && n % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write (1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "buzz", 4);
		else
			print_num(n);
		if (n <= 100)
			write (1, "\n", 1);
	}
	return (0);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* int ft_atoi(const char *str)
{
	int	i;
	int sg;
	int res;

	i = 0;
	sg = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sg);
} */

int	ft_do_op(int a, char op, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/')
		return (a / b);
	if (op == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		printf("%i", ft_do_op(a, argv[2][0], b));
	}
	printf("\n");
}

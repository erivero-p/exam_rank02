int ft_atoi(const char *str)
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
}

/* #include <stdio.h>
int	main (void)
{
	printf("%i", ft_atoi("3242"));
} */
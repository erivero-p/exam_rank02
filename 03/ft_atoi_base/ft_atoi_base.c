unsigned int ft_base_position(char c, int n)
{
	int		i;
	char	*base;

	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		base = "0123456789abcdef";
	else if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		base = "0123456789ABCDEF";
	while (i <= n)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1); // no puede ser 0 porque i será 0 en la primera posición
}

int	ft_atoi_base(const char *str, int str_base)
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
	while (ft_base_position(str[i], str_base) != -1)
	{
		res = res * str_base;
		res = res + ft_base_position(str[i], str_base);
		i++;
	}
	return (res * sg);
}

/* #include <stdio.h>
int	main(void)
{
	int		nb;
	nb = ft_atoi_base("10", 2);
	printf("%d\n", nb);

	return (0);
} */
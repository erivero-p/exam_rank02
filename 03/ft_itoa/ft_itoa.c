#include <stdlib.h>

int	ft_count(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	int		res;

	i = 0;
	res = nbr;
	if (nbr < 0)
	{
		res *= -1;
		i = 1;
	}
	i += ft_count(res);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = res % 10 + 48;
		res /= 10;
		if (nbr < 0)
			str[0] = '-';
		i--;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	int a = -432;
	printf("%s\n", ft_itoa(a));
	printf("%i\n", ft_count(a));
} */
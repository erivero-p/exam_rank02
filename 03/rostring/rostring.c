#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] <= 32)
		i++;
	while (str[i])
	{
		if (!(str[i] <= 32 && str[i + 1] <= 32))
			count++;
		i++;
	}
	return (count);
}

char	*ft_rostring(char *str)
{
	char	*ro;
	int		len;
	int		i;
	int		j;

	i = 0;
	len = ft_strlen(str);
	ro = malloc((len + 1) * sizeof(char));
	if (!ro)
		return (NULL);
	while (str[i] <= 32)
		i++;
	while (str[i] > 32)
		i++;
	j = i - 1;
	ro[len--] = '\0';
	while (j >= 0 && str[j] > 32)
		ro[len--] = str[j--];
	ro[len--] = str[i++];
	j = 0;
	while (j <= len)
	{
		if (!(str[i] <= 32 && str[i + 1] <= 32))
			ro[j++] = str[i];
		i++;
	}
	return (ro);
}

int main (int ac, char **av)
{
	char	*str;
	int		i;

	if (ac > 1)
	{
		str = ft_rostring(av[1]);
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
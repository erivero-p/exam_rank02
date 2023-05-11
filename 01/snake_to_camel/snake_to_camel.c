#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*snake_to_camel(char	*s)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] != '_')
			str[j++] = s[i];
		else if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == '_')
			str[j++] = s[i] - 32;
		i++;
	}
	str[j++] = '\0';
	str = (char *)realloc(str, ft_strlen(str) * sizeof(char));
	return (str);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = snake_to_camel(argv[1]);
		ft_putstr(str);
		free(str);
	}
	write (1, "\n", 1);
	return (0);
}
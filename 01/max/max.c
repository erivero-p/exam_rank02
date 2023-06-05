int	max(int *tab, unsigned int len)
{
	int	ret;
	int	i;

	ret = 0;
	while (len-- > 0)
	{
		if (ret < tab[len])
			ret = tab[len];
	}
	return (ret);
}

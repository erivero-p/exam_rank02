unsigned int	ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int	hcf;

	hcf = a;
	if (a < b)
		hcf = b;
	while (hcf > 0)
	{
		hcf--;
		if (a % hcf == 0 && b % hcf == 0)
			return (hcf);
	}
	return (0);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;
	unsigned int	hcf;

	lcm = 0;

	if ((int)a >= 0 && (int)b >= 0)
	{
		hcf = ft_hcf(a, b);
		lcm = (a * b) / hcf;
	}
	return (lcm);
}

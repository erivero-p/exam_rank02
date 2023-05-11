#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	i;
	int	len;

	if (end >= start)
		len = end - start;
	else
		len = start - end;
	arr = malloc((len + 1) * sizeof(int));
	if (!arr)
		return(NULL);
	while (len-- >= 0)
	{
		arr[i] = end;
		i++;
		end--;
	}
	return(arr);
}

/* #include <stdio.h>
int	main (void)
{
	int	*rr;
	int	aux[3] = {1,2,3};
	int	i;

	i = 0;
	rr = ft_rrange(-1, 2932);
	while (i < 2934)
	{
		printf("%i ", rr[i]);
		i++;
	}
	return (0);
} */
#include <stdlib.h>

int	*ft_range(int start, int end)
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
	if (start <= end)
	{
		while (len-- >= 0)
		{
			arr[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (len-- >= 0)
		{
			arr[i] = start;
			i++;
			start--;
		}
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
	rr = ft_range(0, 3);
	while (i < 4)
	{
		printf("%i ", rr[i]);
		i++;
	}
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:51:28 by erivero-          #+#    #+#             */
/*   Updated: 2023/05/30 12:04:46 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi_s(char *num)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (num[i] >= '0' && num[i] <= '9')
	{
		res = res * 10 + num[i] - 48;
		i++;
	}
	return (res);
}

void ft_print_hex(int num)
{
	char *base;

	base = "0123456789abcdef";
	if (num >= 16)
		ft_print_hex(num / 16);
	write(1, &base[num % 16], 1);
}

int	main(int ac, char **av)
{
	int	num;

	if (ac == 2)
	{
		num = ft_atoi_s(av[1]);
		ft_print_hex(num);
	}
	write (1, "\n", 1);
}

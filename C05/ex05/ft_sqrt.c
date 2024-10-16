/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 14:26:17 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i * i >= 0)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("ft_sqrt(0) = %d\n", ft_sqrt(0));     // Expected output: 0
	printf("ft_sqrt(1) = %d\n", ft_sqrt(1));     // Expected output: 1
	printf("ft_sqrt(4) = %d\n", ft_sqrt(4));     // Expected output: 2
	printf("ft_sqrt(9) = %d\n", ft_sqrt(9));     // Expected output: 3
	printf("ft_sqrt(16) = %d\n", ft_sqrt(16));   // Expected output: 4
	printf("ft_sqrt(25) = %d\n", ft_sqrt(25));   // Expected output: 5
	printf("ft_sqrt(10) = %d\n", ft_sqrt(10));   // Expected output: 0
	printf("ft_sqrt(2147395600) = %d\n", ft_sqrt(2147395600));// 46340
	return (0);
}*/

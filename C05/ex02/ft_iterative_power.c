/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:45:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 11:25:13 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3)); // Expected output: 8
	printf("5^0 = %d\n", ft_iterative_power(5, 0)); // Expected output: 1
	printf("0^0 = %d\n", ft_iterative_power(0, 0)); // Expected output: 1
	printf("3^-2 = %d\n", ft_iterative_power(3, -2)); // Expected output: 0
	printf("7^2 = %d\n", ft_iterative_power(7, 2)); // Expected output: 49
	return (0);
}*/

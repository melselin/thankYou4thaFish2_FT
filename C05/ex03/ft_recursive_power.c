/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:45:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 11:27:03 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2, 3)); // Expected output: 8
	printf("5^0 = %d\n", ft_recursive_power(5, 0)); // Expected output: 1
	printf("0^0 = %d\n", ft_recursive_power(0, 0)); // Expected output: 1
	printf("3^-2 = %d\n", ft_recursive_power(3, -2)); // Expected output: 0
	printf("7^2 = %d\n", ft_recursive_power(7, 2)); // Expected output: 49
	return (0);
}*/

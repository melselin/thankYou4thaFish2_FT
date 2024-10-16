/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 11:22:49 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("5! = %d\n", ft_recursive_factorial(5)); // Expected output: 120
	printf("0! = %d\n", ft_recursive_factorial(0)); // Expected output: 1
	printf("-3! = %d\n", ft_recursive_factorial(-3)); // Expected output: 0
	printf("10! = %d\n", ft_recursive_factorial(10)); // Expected output: 3628800
	return (0);
}*/

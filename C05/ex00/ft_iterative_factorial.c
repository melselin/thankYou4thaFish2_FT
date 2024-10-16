/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:14:47 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 10:21:20 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("5! = %d\n", ft_iterative_factorial(5)); // Expected output: 120
	printf("0! = %d\n", ft_iterative_factorial(0)); // Expected output: 1
	printf("-3! = %d\n", ft_iterative_factorial(-3)); // Expected output: 0
	printf("10! = %d\n", ft_iterative_factorial(10)); // Expected output: 3628800
	return (0);
}

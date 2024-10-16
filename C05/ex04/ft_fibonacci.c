/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:30:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 14:21:51 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Fibonacci of %d is %d\n", 0, ft_fibonacci(0));  // Expected output: 0
	printf("Fibonacci of %d is %d\n", 1, ft_fibonacci(1));  // Expected output: 1
	printf("Fibonacci of %d is %d\n", 2, ft_fibonacci(2));  // Expected output: 1
	printf("Fibonacci of %d is %d\n", 3, ft_fibonacci(3));  // Expected output: 2
	printf("Fibonacci of %d is %d\n", 4, ft_fibonacci(4));  // Expected output: 3
	printf("Fibonacci of %d is %d\n", 5, ft_fibonacci(5));  // Expectd  output: 5
	printf("Fibonacci of %d is %d\n", 10, ft_fibonacci(10)); // Expctd output: 55
	printf("Fibonacci of %d is %d\n", -1, ft_fibonacci(-1)); // Expctd output: -1
	return (0);
}*/

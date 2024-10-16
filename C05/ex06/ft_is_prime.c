/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 14:30:55 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("ft_is_prime(0) = %d\n", ft_is_prime(0));     // Expected output: 0
	printf("ft_is_prime(1) = %d\n", ft_is_prime(1));     // Expected output: 0
	printf("ft_is_prime(2) = %d\n", ft_is_prime(2));     // Expected output: 1
	printf("ft_is_prime(3) = %d\n", ft_is_prime(3));     // Expected output: 1
	printf("ft_is_prime(4) = %d\n", ft_is_prime(4));     // Expected output: 0
	printf("ft_is_prime(5) = %d\n", ft_is_prime(5));     // Expected output: 1
	printf("ft_is_prime(25) = %d\n", ft_is_prime(25));   // Expected output: 0
	printf("ft_is_prime(29) = %d\n", ft_is_prime(29));   // Expected output: 1
	printf("ft_is_prime(97) = %d\n", ft_is_prime(97));   // Expected output: 1
	return (0);
}
*/

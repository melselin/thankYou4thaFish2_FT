/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 14:39:27 by mwelfrin         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Next prime after 0: %d\n", ft_find_next_prime(0));     // Eo: 2
	printf("Next prime after 1: %d\n", ft_find_next_prime(1));     // Eo: 2
	printf("Next prime after 2: %d\n", ft_find_next_prime(2));     // Eo: 2
	printf("Next prime after 3: %d\n", ft_find_next_prime(3));     // Eo: 3
	printf("Next prime after 4: %d\n", ft_find_next_prime(4));     // Eo: 5
	printf("Next prime after 5: %d\n", ft_find_next_prime(5));     // Eo: 5
	printf("Next prime after 10: %d\n", ft_find_next_prime(10));   // Eo: 11
	printf("Next prime after 24: %d\n", ft_find_next_prime(24));   // Eo: 29
	printf("Next prime after 100: %d\n", ft_find_next_prime(100)); //Eo: 101
	return (0);
}*/

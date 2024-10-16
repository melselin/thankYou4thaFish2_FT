/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:16:05 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/19 11:16:36 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	if (*b != 0)
	{
		temp_div = *a / *b;
		temp_mod = *a % *b;
		*a = temp_div;
		*b = temp_mod;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("Before: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After: a = %d (division result), b = %d (modulo result)\n", a, b);
	return (0);
}*/

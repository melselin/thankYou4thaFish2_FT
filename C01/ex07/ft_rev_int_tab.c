/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:45:30 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/22 08:52:11 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	printf("Original array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Reversed array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return (0);
}*/

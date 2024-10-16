/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/29 14:26:34 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(42);          // Expected output: 42
	write(1, "\n", 1);
	ft_putnbr(-42);         // Expected output: -42
	write(1, "\n", 1);
	ft_putnbr(2147483647);  // Expected output: 2147483647
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // Expected output: -2147483648
	write(1, "\n", 1);
	ft_putnbr(0);           // Expected output: 0
	write(1, "\n", 1);

	return (0);
}*/

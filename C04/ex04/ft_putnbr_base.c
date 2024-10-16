/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 09:19:14 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_is_invalid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int base_len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base_recursive(nbr / base_len, base, base_len);
		write(1, &base[-(nbr % base_len)], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nbr, base, base_len);
	}
	else
	{
		if (nbr >= base_len)
			ft_putnbr_base_recursive(nbr / base_len, base, base_len);
		write(1, &base[nbr % base_len], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (ft_is_invalid_base(base))
		return ;
	base_len = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, base_len);
}
/*#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(123, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-123, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(123, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-123, "01");
	write(1, "\n", 1);
	ft_putnbr_base(123, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-123, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(123, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-123, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(123, "01234+6789");
	write(1, "\n", 1);
	ft_putnbr_base(123, "01234456789");
	write(1, "\n", 1);
	ft_putnbr_base(123, "");
	write(1, "\n", 1);
	ft_putnbr_base(123, "0");
	write(1, "\n", 1);
	return (0);
}*/

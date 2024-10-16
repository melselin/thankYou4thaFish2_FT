/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/30 09:12:47 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "";
	char	str3[] = "42 is amazing!";

	ft_putstr(str1); // Expected output: Hello, World!
	write(1, "\n", 1);
	ft_putstr(str2); // Expected output: (nothing)
	write(1, "\n", 1);
	ft_putstr(str3); // Expected output: 42 is amazing!
	write(1, "\n", 1);

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:20:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 15:49:08 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello\tWorld!";
	char	str3[] = "";

	printf("str1: %d\n", ft_str_is_printable(str1)); // Expected Output: 1
	printf("str2: %d\n", ft_str_is_printable(str2)); // Expected Output: 0
	printf("str3: %d\n", ft_str_is_printable(str3)); // Expected Output: 1

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:21:33 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 15:41:13 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "123456";
	char	str2[] = "123a456";
	char	str3[] = "";

	printf("str1: %d\n", ft_str_is_numeric(str1)); // Expected Output: 1
	printf("str2: %d\n", ft_str_is_numeric(str2)); // Expected Output: 0
	printf("str3: %d\n", ft_str_is_numeric(str3)); // Expected Output: 1

	return (0);
}*/

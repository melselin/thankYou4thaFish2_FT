/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 15:46:00 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "ABCDEF";
	char	str2[] = "ABCdEF";
	char	str3[] = "";

	printf("str1: %d\n", ft_str_is_uppercase(str1)); // Expected Output: 1
	printf("str2: %d\n", ft_str_is_uppercase(str2)); // Expected Output: 0
	printf("str3: %d\n", ft_str_is_uppercase(str3)); // Expected Output: 1

	return (0);
}*/

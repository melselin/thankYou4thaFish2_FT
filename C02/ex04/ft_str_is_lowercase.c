/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:44:17 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 15:43:23 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcDef";
	char	str3[] = "";

	printf("str1: %d\n", ft_str_is_lowercase(str1)); // Expected Output: 1
	printf("str2: %d\n", ft_str_is_lowercase(str2)); // Expected Output: 0
	printf("str3: %d\n", ft_str_is_lowercase(str3)); // Expected Output: 1

	return (0);
}*/

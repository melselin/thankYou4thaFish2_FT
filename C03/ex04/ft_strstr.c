/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:55:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/29 08:59:09 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello World!";
	char to_find1[] = "World";
	char to_find2[] = "world";
	char to_find3[] = "";

	printf("%s\n", ft_strstr(str, to_find1)); // Expected output: "World!"
	printf("%s\n", ft_strstr(str, to_find2)); // Expected output: "(null)"
	printf("%s\n", ft_strstr(str, to_find3)); // Expected output: "Hello World!"
	return (0);
}*/

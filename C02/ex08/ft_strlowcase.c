/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/25 09:21:31 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "HELLO, WORLD!";
	char str2[] = "cOdIng IS FuN";

	printf("Original str1: %s\n", str1);
	printf("Lowercase str1: %s\n", ft_strlowcase(str1));
	printf("Original str2: %s\n", str2);
	printf("Lowercase str2: %s\n", ft_strlowcase(str2));

	return (0);
}*/

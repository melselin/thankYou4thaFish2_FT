/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 15:56:13 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello, World!";
	char str2[] = "cOdIng IS FuN";

	printf("Original str1: %s\n", str1);
	printf("Uppercase str1: %s\n", ft_strupcase(str1));
	printf("Original str2: %s\n", str2);
	printf("Uppercase str2: %s\n", ft_strupcase(str2));

	return (0);
}*/

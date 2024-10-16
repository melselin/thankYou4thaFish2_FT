/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/29 08:52:51 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "HellO";
	char	str4[] = "Hell";
	
	printf("Compare str1 and str2: %d\n", ft_strcmp(str1, str2));
	printf("Compare str1 and str3: %d\n", ft_strcmp(str1, str3));
	printf("Compare str1 and str4: %d\n", ft_strcmp(str1, str4));
	printf("Compare str4 and str1: %d\n", ft_strcmp(str4, str1));
	return (0);
}
*/

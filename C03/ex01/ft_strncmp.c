/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:15:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/29 08:51:12 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "HellO";
	char str4[] = "Hell";
	char str5[] = "Hella";

	printf("Compare str1 and str2 (5 chars): %d\n", ft_strncmp(str1, str2, 5));
	printf("Compare str1 and str3 (5 chars): %d\n", ft_strncmp(str1, str3, 5));
	printf("Compare str1 and str4 (5 chars): %d\n", ft_strncmp(str1, str4, 5));
	printf("Compare str4 and str1 (5 chars): %d\n", ft_strncmp(str4, str1, 5));
	printf("Compare str1 and str5 (4 chars): %d\n", ft_strncmp(str1, str5, 4));
	printf("Compare str1 and str5 (5 chars): %d\n", ft_strncmp(str1, str5, 5));

	return (0);
}*/

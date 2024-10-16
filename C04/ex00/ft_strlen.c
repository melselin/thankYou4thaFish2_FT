/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:00:00 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/29 14:19:07 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "";
	char str3[] = "42";

	printf("Length of '%s': %d\n", str1, ft_strlen(str1)); // Expected: 13
	printf("Length of '%s': %d\n", str2, ft_strlen(str2)); // Expected: 0
	printf("Length of '%s': %d\n", str3, ft_strlen(str3)); // Expected: 2

	return (0);
}*/

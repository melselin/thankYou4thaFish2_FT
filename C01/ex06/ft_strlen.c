/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:22:07 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/19 11:51:30 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
int	main(void)
{
	char	*message;
	int		length;

	message = "Hello, World!";
	length = ft_strlen(message);
	printf("The length of the string is: %d\n", length);
	return (0);
}*/

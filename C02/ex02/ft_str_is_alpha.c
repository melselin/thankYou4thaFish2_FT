/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:51:10 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/07/24 14:58:40 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test1 = "HelloWorld";   // Only alphabet chars
	char	*test2 = "Hello World";  // Includes space
	char	*test3 = "";             // Empty String
	char	*test4 = "Hello123";     // Includes numbers

	printf("Test 1: %d\n", ft_str_is_alpha(test1)); // Expected: 1
	printf("Test 2: %d\n", ft_str_is_alpha(test2)); // Expected: 0
	printf("Test 3: %d\n", ft_str_is_alpha(test3)); // Expected: 1
	printf("Test 4: %d\n", ft_str_is_alpha(test4)); // Expected: 0

	return (0);
}
*/


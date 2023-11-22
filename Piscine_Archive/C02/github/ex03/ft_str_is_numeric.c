/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:02 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/07 13:56:03 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hi2";
	char	str3[] = "21385691";
	char	str4[] = "";

	printf("\nStatus for string1 is: %d\n", ft_str_is_numeric(str1));
	printf("\nStatus for string2 is: %d\n", ft_str_is_numeric(str2));
	printf("\nStatus for string3 is: %d\n", ft_str_is_numeric(str3));
	printf("\nStatus for string4 is: %d\n", ft_str_is_numeric(str4));
	return (0);
}
*/

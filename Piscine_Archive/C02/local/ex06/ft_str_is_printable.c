/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:02 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/07 14:01:00 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	str1[] = "HELLO";
	char	str2[] = "Hi €";
	char	str3[] = "21385691";
	char	str4[] = "lowercase";
	char	str5[] = "";

	printf("\nStatus for string1 is: %d\n", ft_str_is_printable(str1));
	printf("\nStatus for string2 is: %d\n", ft_str_is_printable(str2));
	printf("\nStatus for string3 is: %d\n", ft_str_is_printable(str3));
	printf("\nStatus for string4 is: %d\n", ft_str_is_printable(str4));
	printf("\nStatus for string5 is: %d\n", ft_str_is_printable(str5));
	return (0);
}
*/

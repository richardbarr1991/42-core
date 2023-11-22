/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:02 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/07 14:05:21 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "Hi2";
	char	str3[] = "21385691";
	char	str4[] = "lowercase";
	char	str5[] = "";

	printf("\nStatus for string1 is: %s\n", ft_strlowcase(str1));
	printf("\nStatus for string2 is: %s\n", ft_strlowcase(str2));
	printf("\nStatus for string3 is: %s\n", ft_strlowcase(str3));
	printf("\nStatus for string4 is: %s\n", ft_strlowcase(str4));
	printf("\nStatus for string5 is: %s\n", ft_strlowcase(str5));
	return (0);
}
*/

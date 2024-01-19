/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:02 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/07 14:07:34 by rbarr            ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (first == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -32;
			}
			first = 1;
		}
		if (!((str[i] > 47 && str[i] < 58)
				|| (str[i] > 64 && str[i] < 91)
				|| (str[i] > 96 && str[i] < 122)))
		{
			first = 0;
		}
		++i;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "HELLO my fRiend";
	char	str2[] = "Hi2";
	char	str3[] = "21385691";
	char	str4[] = "lowercase";
	char	str5[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("\nStatus for string1 is: %s\n", ft_strcapitalize(str1));
	printf("\nStatus for string2 is: %s\n", ft_strcapitalize(str2));
	printf("\nStatus for string3 is: %s\n", ft_strcapitalize(str3));
	printf("\nStatus for string4 is: %s\n", ft_strcapitalize(str4));
	printf("\nStatus for string5 is: %s\n", ft_strcapitalize(str5));
	return (0);
}
*/

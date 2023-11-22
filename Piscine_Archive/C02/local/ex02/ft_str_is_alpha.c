/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:50:02 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/07 14:08:54 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	strlen;
	int	i;
	int	status;

	status = 1;
	i = 0;
	strlen = 0;
	if (str[i] == '\0')
	{
		return (status);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')) 
		{
			i++;
		}
		else
		{
			status = 0;
			return (status);
		}
	}
	return (status);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hi2";
	char	str3[] = "";

	printf("\nStatus for string1 is: %d\n", ft_str_is_alpha(str1));
	printf("\nStatus for string2 is: %d\n", ft_str_is_alpha(str2));
	printf("\nStatus for string3 is: %d\n", ft_str_is_alpha(str3));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:01:01 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 11:25:25 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = dest;
	i = 0;
	j = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		ptr[i] = src[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[100] = "Hello, ";
	char	s2[] = "World!";

	printf("ft_strcat is: %s\n", ft_strcat(s1, s2));
	char	s3[100] = "Hello, ";
	char	s4[] = "World!";
	printf("strcat is: %s\n", strcat(s3, s4));
	return (0);
}
*/

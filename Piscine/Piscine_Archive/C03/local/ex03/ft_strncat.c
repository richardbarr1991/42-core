/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:20:32 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 11:27:59 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = dest;
	i = 0;
	j = 0;
	while (ptr[i])
	{
		i++;
	}
	while (src[j] && nb > 0)
	{
		ptr[i] = src[j];
		i++;
		j++;
		nb--;
	}
	ptr[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[100] = "Hello ";
	char	s2[] = "World!";

	printf("ft_strncat is: %s\n", ft_strncat(s1, s2, 3));
	char	s3[100] = "Hello ";
	char	s4[] = "World!";
	strncat(s3, s4, 3);
	printf("strncat is: %s\n", s3);
	return (0);
}
*/

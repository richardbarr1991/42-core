/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:19:50 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 11:33:52 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	dlen;
	int	slen;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dlen = i;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (size + slen);
	while (src[j] && j < size - dlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}

/*
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = " world";

	printf("total length is: %d\n", ft_strlcat(s1, s2, 3));
	printf("dest is: %s\n", s1);
	
	char	s3[] = "hello";
	char	s4[] = " world";

	printf("total length is: %zu\n", strlcat(s3, s4, 3));
	printf("dest is: %s\n", s3);
	return (0);
}
*/

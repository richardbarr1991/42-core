/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:41:36 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/08 12:25:55 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = 0;
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[src_length])
	{
		src_length++;
	}
	return (src_length);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[] = "hello";
	char	dest[5];

	printf("Source text says: '%s'\n", src);
	ft_strlcpy(dest, src, sizeof(dest));
	printf("Destination text says: '%s'\n", dest);
	printf("Source size was: %d\n", ft_strlcpy(dest, src, sizeof(dest)));
	
	printf("\n Now with strlcpy: \n");
	printf("Source text says: '%s'\n", src);
	strlcpy(dest, src, sizeof(dest));
	printf("Destination text says: '%s'\n", dest);
	printf("Source size was: %zu\n", strlcpy(dest, src, sizeof(dest)));

	return (0);
}
*/

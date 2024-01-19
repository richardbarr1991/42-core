/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:41:36 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/08 12:25:23 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];

	printf("Source text says: \n '%s'\n", src);
	ft_strncpy(dest, src, 10);
	printf("Destination text says: \n '%s'\n", dest);
	return (0);
}
*/

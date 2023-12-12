/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:42:33 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/11 16:31:04 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
	size_t	size;
	char	dst[] = "hi";
	const char	*src = argv[1];

	size = 12;
	ft_strlcpy(dst, src, size);
	printf("hello world");
	printf("%s", dst);
	}
	return (0);
}
*/

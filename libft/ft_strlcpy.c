/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:42:33 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/15 13:49:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <bsd.string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
	size_t	size;
	char	dst[] = "hi";
	const char	*src = *argv[1];

	size = 12;
	ft_strlcpy(dst, src, size);
	printf("hello world");
	printf("%s", *dst);
	}
	return (0);
}

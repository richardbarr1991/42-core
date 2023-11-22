/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:09:10 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/13 15:49:59 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dst[i])
	{
		i++;
	}
	while (l < size)
	{
		dst[i] = src[l];
		i++;
		l++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		strlcat(argv[1], argv[2], sizeof(argv[2]));
		printf("%s", argv[1]);
	}
	return (0);
}

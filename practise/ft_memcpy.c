/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:15:27 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/19 11:57:41 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "hello";
	char	*s2[5];

	printf("%s\n", (char *)ft_memcpy(s2, s1, 5));
	printf("%s\n", (char *)memcpy(s2, s1, 5));
	return (0);
}

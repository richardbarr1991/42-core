/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:12:44 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/12 11:54:31 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dst[15] = "socrazywow";
// 	char	*src = "literal";
// 	size_t	len = 6;

// 	printf("%s\n", (char *)ft_memmove(dst, src, len));
// 	printf("%s\n", (char *)ft_memmove(((void*)0), ((void*)0), 5));
// 	return (0);
// }

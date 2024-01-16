/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:31:26 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/12 12:18:49 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] 
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
//  	char *s1 = "oh no not the empty string !";
//  	char *s2 = "";
//  	size_t max = 0;
//  	char *i2 = ft_strnstr(s1, s2, max);
//  	printf("%s\n", i2);
// 	printf("%s,\n", ft_strnstr("1", "a", 1));
// 	return (0);
// }

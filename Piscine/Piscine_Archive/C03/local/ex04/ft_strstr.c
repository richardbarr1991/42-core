/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:55:12 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/08 16:32:41 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "the brick wwworld brown fox jumps over the lazy dog";
	char	s2[] = "wworld";

	printf("word found is: %s\n", ft_strstr(s1, s2));
	return (0);
}
*/

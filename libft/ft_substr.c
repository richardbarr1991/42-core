/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:35:09 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/12 14:17:02 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fillstr(char *str, const char *s,
	unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL || start >= (unsigned int) ft_strlen(s)
		|| len == 0)
	{
		str = (char *)malloc(1 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (start + len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str = fillstr(str, s, start, len);
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s = "helloworld";
	int	start = 2;
	size_t	len = 4;

	printf("%s\n", ft_substr(s, start, len));
	printf("%s\n", ft_substr(4, "hola", -1, 0, "")
	return (0);
}
*/ 

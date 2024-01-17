/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:51:15 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/17 17:55:45 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	nl_found(char	*str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if ('\n' == str[i])
		return (1);
	return (0);
}
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
char	*fill_nl(char *stash, char *remainder)
{
	char	*nextline;
	int		len;
	int		i;

	len = 0;
	while (remainder[len])
		len++;
	i = 0;
	while (stash[i] != '\n')
	{
		len++;
		i++;
	}
	nextline = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (remainder[i])
	{
		printf("remainder[i] is %c\n", remainder[0]);
		*nextline++ = remainder[i++];
		printf("nextline is %c\n", nextline[0]);
	}
	i = 0;
	while (*stash != '\n')
		nextline[i++] = *stash++;
	stash++;
	i = 0;
	while (*stash)
		remainder[i++] = *stash++;
	remainder[i] = '\0';
	return (nextline);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:44:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/22 17:04:25 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_scanbuffer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	if (i == BUFFER_SIZE)
		return (1);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	printf("strjoinlen is: %zu\n", len);
	str = (char *)malloc(sizeof(char) * (len + 1));
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

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*buffer;
	char		*stash;
	char		*nextline;
	int			bytes_read;

	bytes_read = 0;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	stash = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	nextline = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	remainder = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (NULL == buffer || NULL == stash || NULL == nextline)
		return (NULL);
	if (NULL == remainder)
		remainder = (char)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (NULL == remainder)
		return (NULL);
	bytes_read += read(fd, buffer, BUFFER_SIZE);
	printf("\n bytes read is: %d \n", bytes_read);
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = ft_strjoin(stash, buffer);
	while (ft_scanbuffer(buffer))
	{
		bytes_read += read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
	}
	return (stash);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:44:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/22 18:53:53 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_buffer_to_stash(char *stash, char *buffer, int bytes_read, int fd)
{
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (BUFFER_SIZE <= 0 || fd < 0 || bytes_read < 0)
		return (NULL);
	stash = ft_strjoin(stash, buffer);
	while (ft_scanbuffer(buffer))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < BUFFER_SIZE)
			buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	return (stash);
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
	if (NULL == buffer || NULL == stash || NULL == nextline)
		return (NULL);
	if (NULL == remainder)
		remainder = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (NULL == remainder)
		return (NULL);
	stash = ft_buffer_to_stash(stash, remainder, bytes_read, fd);
	nextline = fill_nl(stash, remainder);
	if (!*nextline)
		return (NULL);
	free (buffer);
	free (stash);
	return (nextline);
}

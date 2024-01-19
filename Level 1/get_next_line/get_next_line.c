/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:44:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/19 21:03:09 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	{
		remainder = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	}
	if (NULL == remainder)
		return (NULL);
	bytes_read += read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (NULL);
	stash = ft_strjoin(stash, buffer);
	while (!nl_found(stash))
	{
		bytes_read += read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
	}
	printf("remainder string is: %s \n", remainder);
	nextline = fill_nl(stash, remainder);
	return (nextline);
}

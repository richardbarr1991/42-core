/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/13 16:57:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *stash)
{
	char	*buf;
	char	*line;
	char	*temp;
	int		bytes_read;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = read(fd, buf, BUFFER_SIZE);
	buf[bytes_read] = '\0';
	line = ft_strdup(buf);
	while (bytes_read == BUFFER_SIZE)
	{
		temp = line;
		bytes_read = read(fd, buf, BUFFER_SIZE);
		buf[bytes_read] = '\0';
		line = ft_strjoin(temp, buf);
		free(temp);
		if (strchr(line, '\n'))
			printf("nl found\n");
	}
	free(buf);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stash != NULL)
			free(stash);
		return (0);
	}
	if (!stash)
		stash = malloc((BUFFER_SIZE + 1) * sizeof(char));
	line = read_file(fd, stash);
	return (line);
}

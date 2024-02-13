/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/13 21:10:05 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	fill_stash(char *line, char *stash)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	j = 0;
	while (line[i])
		stash[j] = line[i];

	return (temp);
}

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
	while (bytes_read == BUFFER_SIZE && !(strchr(line, '\n')))
	{
		temp = line;
		bytes_read = read(fd, buf, BUFFER_SIZE);
		buf[bytes_read] = '\0';
		line = ft_strjoin(temp, buf);
		free(temp);
	}
	if (strchr(line, '\n'))
		fill_stash(line, stash);
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
	if (!stash)
		return (NULL);
	line = read_file(fd, stash);
	return (line);
}

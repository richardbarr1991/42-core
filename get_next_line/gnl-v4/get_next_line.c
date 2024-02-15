/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/15 17:33:06 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clean_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\n')
		i++;
	while (line[i])
		line[i++] = '\0';
	return ;
}

void	fill_stash(char *line, char *stash)
{
	int	i;
	int	j;

	i = 0;
	while (line[i] != '\n')
		i++;
	j = 0;
	while (line[i])
		stash[j++] = line[i++];
	stash[j] = '\0';
	return ;
}

char	*read_file(int fd, char *line, char *stash)
{
	char	*buf;
	char	*temp;
	int		bytes_read;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE && !(strchr(line, '\n')))
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(buf);
			free(line);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		temp = line;
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
	char		*temp;

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
	line = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	temp = line;
	line = read_file(fd, line, stash);
	free(temp);
	if (!line)
		return (NULL);
	clean_line(line);
	return (line);
}

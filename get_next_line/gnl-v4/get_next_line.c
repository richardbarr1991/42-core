/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/16 14:10:19 by rbarr            ###   ########.fr       */
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

char	*fill_stash(char *line)
{
	char	*temp;
	int		i;
	int		j;

	temp = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	i = 0;
	while (line[i] != '\n')
		i++;
	j = 0;
	i++;
	while (line[i])
		temp[j++] = line[i++];
	temp[j] = '\0';
	return (temp);
}

char	*read_file(int fd, char *line)
{
	char	*buf;
	char	*temp;
	int		bytes_read;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE && !(ft_strchr(line, '\n')))
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read <= 0 && !line[0])
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
	free(buf);
	return (line);
}

void	stash_to_line(char *line, char *stash)
{
	int	i;

	i = 0;
	if (!stash[i])
		return ;
	while (stash[i])
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return ;
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stash != NULL)
			free(stash);
		return (NULL);
	}
	line = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (stash)
		stash_to_line(line, stash);
	line = read_file(fd, line);
	if (!line)
		return (NULL);
	if (ft_strchr(line, '\n'))
	{
		if (stash)
			free(stash);
		stash = fill_stash(line);
		clean_line(line);
	}
	return (line);
}

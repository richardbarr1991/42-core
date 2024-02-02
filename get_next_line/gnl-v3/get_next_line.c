/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:46:22 by richardbarr       #+#    #+#             */
/*   Updated: 2024/02/02 20:44:21 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	int		i;
	int		j;

	dest = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		dest[j++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

char	*fill_line(int fd, char *buf, char *stash)
{
	char	*temp;
	int		bytes_read;

	if (!stash)
		stash = ft_strdup("");
	temp = stash;
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		buf[bytes_read] = '\0';
		temp = ft_strjoin(temp, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (temp);
}

char	*fill_stash(char *line)
{
	char	*temp;
	int		i;
	int		j;

	temp = ft_strdup("");
	i = 0;
	while (line[i++] != '\n')
		;
	j = 0;
	while (line[i])
		temp[j++] = line[i++];
	temp[j] = '\0';
	return (temp);
}

void	clean_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\n')
		i++;
	while (line[i++])
		line[i] = '\0';
	return ;
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buf;
	char		*line;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	line = fill_line(fd, buf, stash);
	stash = fill_stash(line);
	clean_line(line);
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:44:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/17 17:52:27 by rbarr            ###   ########.fr       */
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
	int			i;

	printf("remainder is %s\n", remainder);
	i = 0;
	bytes_read = 0;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	stash = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	nextline = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	remainder = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	remainder[0] = 'a';
	remainder[1] = 'b';
	remainder[2] = '\0';
	if (NULL == buffer || NULL == stash || NULL == nextline)
		return (NULL);
	bytes_read += read(fd, buffer, BUFFER_SIZE);
	stash = ft_strjoin(stash, buffer);
	while (!nl_found(stash))
	{
		bytes_read += read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
	}
	nextline = fill_nl(stash, remainder);
	return (nextline);
}

int	main(void)
{
	int		fd;
	char	*mynextline;

	fd = open("file1.txt", O_RDONLY);
	mynextline = get_next_line(fd);
	printf("%s\n", mynextline);
	mynextline = get_next_line(fd);
	printf("%s\n", mynextline);
	return (0);
}

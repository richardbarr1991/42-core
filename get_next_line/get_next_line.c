/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:56:20 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/04 17:34:45 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[0] != '\0')
		i++;
	return (i);
}

void	ft_strlcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src [i] != '\n')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
}

int	ft_line_len(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return(i);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	static char	line[BUFFER_SIZE];

	int	line_len;
	if (buffer[0] == '\0')
		read(fd, buffer, BUFFER_SIZE);
	if (line[0] != '\0')
	{
		printf("line aint null\n");
		buffer += ft_strlen(line);
		ft_strlcpy(line, buffer, BUFFER_SIZE);
	}
	else
		ft_strlcpy(line, buffer, BUFFER_SIZE);
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("sample.txt", O_RDWR);
	printf("fd is %d\n", fd);
	printf("read bytes is:\n%s\n", get_next_line(fd));
	printf("read bytes is:\n%s\n", get_next_line(fd));
	return (0);
}

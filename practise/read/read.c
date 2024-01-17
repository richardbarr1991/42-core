/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:08:33 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/17 13:26:07 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1

int	newlinefound(char	*str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		return (1);
	return (0);
}

int	main(void)
{
	char	*buffer;
	char	*start;
	int		fd;

	fd = open("file1.txt", O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * 10);
	start = buffer;
	if (NULL == buffer)
		return (0);
	while (!newlinefound(start))
	{
		read(fd, buffer++, 1);
	}
	printf("\n%s\n", start);
	return (0);
}

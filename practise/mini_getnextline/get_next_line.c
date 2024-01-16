/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:44:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 16:58:19 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	buf[1024];
	char	*result;
	int		i;

	fd = open("file1.txt", O_RDONLY);
	// while ((i = read(fd, buf, BUFFER_SIZE)))
	// {
	// 	buf[i] = '\0';
	// 	printf("buf-> %s\n", buf);
	// }
	i = read(fd, buf, BUFFER_SIZE);
	result = (char *)malloc(sizeof(char) * (i + 1));
	printf("i is %d\n", i);
	return (0);
}

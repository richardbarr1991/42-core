/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:51:08 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/15 16:49:14 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	gnl_tester(int fd)
{
	char	*nextline;

	nextline = get_next_line(fd);
	printf("%s\n", nextline);
	free(nextline);
	return ;
}

int	main(void)
{
	char	*dir;
	char	**files;
	int		total_files;
	char	filepath[1000];
	int		i;

	total_files = 5;
	files = malloc(total_files * sizeof(char *));
	dir = "test-files/";
	files[0] = "empty.txt";
	files[1] = "1-1.txt";
	files[2] = "1-5.txt";
	files[3] = "1-20.txt";
	files[4] = "2-20.txt";
	i = 1;
	while (i < total_files)
	{
		snprintf(filepath, sizeof(filepath), "%s%s", "test-files/", files[i]);
		gnl_tester(open(filepath, O_RDONLY));
		i++;
	}
	free(files);
	get_next_line(-1);
	return (0);
}

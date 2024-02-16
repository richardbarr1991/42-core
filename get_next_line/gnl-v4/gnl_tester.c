/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:51:08 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/16 11:13:50 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	gnl_tester(int fd)
{
	char	*nextline;
	int		i;

	i = 1;
	nextline = get_next_line(fd);
	if (!nextline)
		printf("fd%d-line%d %s\n", fd, i, nextline);
	while (nextline)
	{
		printf("fd%d-line%d %s\n", fd, i, nextline);
		free(nextline);
		nextline = get_next_line(fd);
		i++;
	}
	if (nextline)
		free(nextline);
	return ;
}

int	main(void)
{
	char	**files;
	int		total_files;
	char	filepath[1000];
	int		i;

	total_files = 6;
	files = malloc(total_files * sizeof(char *));
	files[0] = "empty.txt";
	files[1] = "1-1.txt";
	files[2] = "1-5.txt";
	files[3] = "1-20.txt";
	files[4] = "2-20.txt";
	files[5] = "project.txt";
	i = 0;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:51:08 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/13 16:58:59 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*dir;
	char	**filenames;
	char	filepath[1000];
	char	*nextline;
	int		fd;
	int		i;
	int		total_files;

	total_files = 4;
	filenames = malloc(total_files * sizeof(char *));
	dir = "test-files/";
	filenames[0] = "1-1.txt";
	filenames[1] = "1-5.txt";
	filenames[2] = "1-20.txt";
	filenames[3] = "2-20.txt";
	i = 0;
	while (i < total_files)
	{
		snprintf(filepath, sizeof(filepath), "%s%s", dir, filenames[i]);
		fd = open(filepath, O_RDONLY);
		nextline = get_next_line(fd);
		printf("%s\n", nextline);
		free(nextline);
		i++;
	}
	free(filenames);
	return (0);
}

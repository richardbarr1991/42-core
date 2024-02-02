/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:51:33 by richardbarr       #+#    #+#             */
/*   Updated: 2024/02/02 20:45:05 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

int	main(void)
{
	int		fd;
	char	*nextline;

	fd = open("sample.txt", O_RDONLY);
	nextline = get_next_line(fd);
	printf("%s", nextline);
	nextline = get_next_line(fd);
	printf("%s", nextline);
	// nextline = get_next_line(fd);
	// printf("%s", nextline);
	// nextline = get_next_line(fd);
	// printf("%s", nextline);

	free(nextline);

	fd = open("lorem_line.txt", O_RDONLY);
	nextline = get_next_line(fd);
	printf("%s", nextline);
	free(nextline);
	return (0);
}

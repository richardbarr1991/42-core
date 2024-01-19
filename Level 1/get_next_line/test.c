/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:46:38 by richardbarr       #+#    #+#             */
/*   Updated: 2024/01/19 21:02:25 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*mynextline;

	fd = open("file1.txt", O_RDONLY);
	mynextline = get_next_line(fd);
	printf("- line 1 \n%s\n", mynextline);
	mynextline = get_next_line(fd);
	printf("- line 2 \n%s\n", mynextline);
	mynextline = get_next_line(fd);
	printf("- line 3 \n%s\n", mynextline);
	mynextline = get_next_line(fd);
	printf("- line 4 \n%s\n", mynextline);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:46:38 by richardbarr       #+#    #+#             */
/*   Updated: 2024/01/22 18:54:12 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*mynextline;
	int		i;

	i = 1;

	// printf("\nlorem_line.txt:\n");
	// fd = open("lorem_line.txt", O_RDONLY);
	// while ((mynextline = get_next_line(fd)))
	// 	printf("\n - line %d - \n*%s\n\n", i++, mynextline);
	// printf("\n - line %d - \n*%s\n\n", i++, mynextline);

	// printf("lorem.txt:\n");
	fd = open("lorem.txt", O_RDONLY);
	while ((mynextline = get_next_line(fd)))
		printf("\n - line %d - \n*%s\n", i++, mynextline);
	printf("\n - line %d - \n*%s\n", i++, mynextline);
	printf("\n\n");
	return (0);
}

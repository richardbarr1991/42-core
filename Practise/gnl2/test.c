/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:46:38 by richardbarr       #+#    #+#             */
/*   Updated: 2024/01/22 16:11:30 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*mynextline;

	fd = open("longline.txt", O_RDONLY);
	while (mynextline = get_next_line(fd) != (NULL))
		printf("\n - line 1 - \n*%s\n\n", mynextline);
	printf("\n\n\n\n");
	return (0);
}

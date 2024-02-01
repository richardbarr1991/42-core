/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:51:08 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/01 16:01:15 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlv4.h"

int	main(void)
{
	char	*nextline;
	int		fd;

	fd = open("file.txt", O_RDONLY);
	nextline = gnlv4(fd);
	printf("%s\n", nextline);
	free(nextline);
	return (0);
}

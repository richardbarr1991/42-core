/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:51:33 by richardbarr       #+#    #+#             */
/*   Updated: 2024/02/02 17:31:27 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"gnl.h"

int	main(void)
{
	int		fd;
	char	*nextline;

	fd = open("sample.txt", O_RDONLY);
	nextline = gnl(fd);
	printf("%s\n", nextline);
	free(nextline);
	return (0);
}

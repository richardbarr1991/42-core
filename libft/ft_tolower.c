/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:51:53 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/11 16:10:08 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*
int	main(int argc, char *argv[])
{
	char	c;

	c = argv[1][0];
	if (argc == 2)
	{
		printf("%c -> %c", c, ft_tolower(c));
		argv[1][0] = 'a';
	}
	return (0);
}
*/

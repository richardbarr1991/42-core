/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:54:24 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/13 14:34:55 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}

int	main(int argc, char *argv[])
{
	char	c;

	c = argv[1][0];
	if (argc == 2)
	{
		printf("%c -> %c", c, ft_toupper(c));
		argv[1][0] = 'a';
	}
	return (0);
}

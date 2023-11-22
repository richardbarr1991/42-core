/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:55:03 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/15 15:00:53 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c > 0 && c < 255)
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_isascii((int)argv[1][0]));
		printf("%d\n", isascii((int)argv[1][0]));
	}
	return (0);
}

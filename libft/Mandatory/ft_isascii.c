/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:55:03 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/11 16:39:57 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
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
*/

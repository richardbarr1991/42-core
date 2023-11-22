/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:05:59 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/15 14:31:15 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_isalpha((int)argv[1][0]));
		printf("%d\n", isalpha((int)argv[1][0]));
	}
	return (0);
}

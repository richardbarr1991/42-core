/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:41:47 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/11 16:15:29 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%zu\n", ft_strlen(argv[1]));
		printf("%zu\n", strlen(argv[1]));
	}
	return (0);
}
*/

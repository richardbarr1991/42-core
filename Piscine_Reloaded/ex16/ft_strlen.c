/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:04:37 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 17:12:17 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_strlen is %d\n", ft_strlen(argv[1]));
		printf("strlen is %lu\n", strlen(argv[1]));
	}
	return (0);
}
*/

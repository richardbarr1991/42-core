/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:15:36 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 17:32:02 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("ft_strcmp is %d\n", ft_strcmp(argv[1], argv[2]));
		printf("strcmp is %d\n", strcmp(argv[1], argv[2]));
	}
	return (0);
}
*/

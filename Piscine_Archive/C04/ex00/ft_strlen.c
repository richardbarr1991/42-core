/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:38:37 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 13:45:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "cats are crazy";
	char	s2[] = "going crazy";

	printf("string length is: %d\n", ft_strlen(s2));
	return (0);
}
*/

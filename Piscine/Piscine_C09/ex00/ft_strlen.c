/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:42:17 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 15:44:10 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(const char *str)
{
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	return (strlen);
}
/*
int	main(void)
{
	const char	mystring[] = "Hello World";

	ft_strlen(mystring);
	printf("the string length is %d\n", ft_strlen(mystring));
	return (0);
}
*/

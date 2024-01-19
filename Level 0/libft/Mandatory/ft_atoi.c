/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:52:40 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/12 15:14:10 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	whitespace(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+')
	{
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	res;

	i = 0;
	is_neg = 1;
	i = whitespace (str, i);
	while (str[i] == '-')
	{
		is_neg *= -1;
		i++;
		if (str[i] == '-')
			return (0);
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * is_neg);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char s1[] = " +1";
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d\n", atoi(s1));
// 	return (0);	
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:46:52 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 17:30:37 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	count;
	int	i;

	sign = 1;
	count = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	*ptr_i = i;
	count = count % 2;
	if (count == 1)
		sign = -1;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	s1[] = "23469";

	if (argc > 1)
	{
		printf("argv is: %s\n", argv[1]);
	}
	printf("ft_atoi is: %d\n", ft_atoi(s1));
	printf("ft_atoi is: %d\n", ft_atoi(argv[1]));
	return (0);
}

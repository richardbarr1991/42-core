/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:04:25 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 18:12:28 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	printf("number is:\n");
	scanf("%d", &nb);
	printf("power is:\n");
	scanf("%d", &power);
	printf("result is: %d\n", ft_iterative_power(nb, power));
	return (0);
}

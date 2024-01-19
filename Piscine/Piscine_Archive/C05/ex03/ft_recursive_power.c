/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:14:01 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 18:32:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	printf("number is: ");
	scanf("%d", &nb);
	printf("power is: ");
	scanf("%d", &power);
	printf("result is: %d\n", ft_recursive_power(nb, power));
	return (0);
}

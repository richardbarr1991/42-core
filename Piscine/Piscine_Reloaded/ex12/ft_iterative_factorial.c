/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:12:04 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/22 17:38:28 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = nb;
	temp = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i > 1)
		{
			temp = (temp * (i - 1));
			i--;
		}
		return (temp);
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int	main(void)
{
	int	nb;

	nb = 6;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}
*/
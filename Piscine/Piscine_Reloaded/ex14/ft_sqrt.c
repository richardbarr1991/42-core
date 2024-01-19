/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:37:04 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 16:37:59 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	binarysearch(int low, int high, int nb)
{
	int	mid;
	int	result;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (mid * mid == nb)
		{
			result = mid;
			return (result);
		}
		else if (mid * mid < nb)
		{
			low = mid + 1;
			result = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	low;
	int	high;

	low = 0;
	high = nb;
	return (binarysearch(low, high, nb));
}

/*
#include <stdio.h>

int	main(void)
{
	int	n;
	
	n = 25;
	printf("root %d is %d\n", n, ft_sqrt(n));
	return (0);
}
*/

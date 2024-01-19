/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:20:42 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 16:35:00 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 7;
	printf("factorial of %d is %d\n", a, ft_recursive_factorial(a));
	return (0);
}
*/

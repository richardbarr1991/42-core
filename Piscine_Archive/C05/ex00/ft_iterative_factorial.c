/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:33:45 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 17:44:57 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = nb - 1;
	f = nb;
	while (i > 1)
	{
		f *= i;
		i--;
	}
	return (f);
}

#include <stdio.h>

int	main(void)
{
	printf("factorial of %d is: %d\n", 9, ft_iterative_factorial(9));
	printf("factorial of %d is: %d\n", 10, ft_iterative_factorial(10));
	printf("factorial of %d is: %d\n", 6, ft_iterative_factorial(6));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:45:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/09 18:03:33 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("factorial of %d is: %d\n", 5, ft_recursive_factorial(5));
	printf("factorial of %d is: %d\n", 9, ft_recursive_factorial(9));
	printf("factorial of %d is: %d\n", 10, ft_recursive_factorial(10));
	return (0);
}

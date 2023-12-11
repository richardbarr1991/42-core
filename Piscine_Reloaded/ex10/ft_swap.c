/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:15:55 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/09 15:19:45 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("a is now %d, b is now %d\n", a, b);
	return (0);
}
*/
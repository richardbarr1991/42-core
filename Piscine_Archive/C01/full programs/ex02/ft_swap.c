/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:26:35 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/25 14:32:39 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tempa;
	int	tempb;

	printf("a was %d\n", *a);
	printf("b was %d\n", *b);
	tempa = *a;
	tempb = *b;
	*a = tempb;
	*b = tempa;
	printf("a is now %d\n", *a);
	printf("b is now %d\n", *b);
}

int	main(void)
{
	int	testa;
	int	testb;

	testa = 5;
	testb = 9;
	ft_swap(&testa, &testb);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:26:35 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 15:07:22 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	printf("a was %d\n", a);
	printf("b was %d\n", b);
	ft_swap(&a, &b);
	printf("a is now %d\n", a);
	printf("b is now %d\n", b);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:39:57 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/25 15:03:42 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
	printf("a divided by b is %d\n", *a);
	printf("remainder of a divided by b is %d\n", *b);
}

int	main(void)
{
	int	testa;
	int	testb;

	testa = 100;
	testb = 7;
	ft_ultimate_div_mod(&testa, &testb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:39:57 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 15:16:01 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*
int	main(void)
{
	int	testa;
	int	testb;

	testa = 100;
	testb = 7;
	ft_ultimate_div_mod(&testa, &testb);
	printf("a divided by b is %d\n", testa);
	printf("remainder of a divided by b is %d\n", testb);
	return (0);
}
*/

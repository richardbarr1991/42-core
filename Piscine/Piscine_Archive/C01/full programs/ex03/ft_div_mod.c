/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:33:48 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/25 14:38:27 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("a divided by b is %d\n", *div);
	printf("remaineder from a divided by b is %d\n", *mod);
}

int	main(void)
{
	int	testa;
	int	testb;
	int	testdiv;
	int	testmod;

	testa = 100;
	testb = 7;
	ft_div_mod(testa, testb, &testdiv, &testmod);
	return (0);
}

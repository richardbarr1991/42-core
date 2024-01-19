/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:50:21 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 15:59:01 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	a, b, div, mod;

		a = argv[1][0] - 48;
		b = argv[2][0] - 48;
		ft_div_mod(a, b, &div, &mod);
		printf("%d over %d is %d remainder %d \n", a, b, div, mod);
	}
	return (0);
}
*/

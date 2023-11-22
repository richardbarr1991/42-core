/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:33:48 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 15:11:13 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 100;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("a divided by b is %d\n", div);
	printf("remainder from a divided by b is %d\n", mod);
	return (0);
}
*/

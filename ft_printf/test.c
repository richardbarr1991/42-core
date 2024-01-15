/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:58:01 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 12:21:24 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int			i;
	int			j;
	const char	*world = "world";
	char		*nptr;

	nptr = NULL;
	i = -2147483648;
	j = 42;
	printf("l: %d\n", printf(0));
	printf("l: %d\n", ft_printf(0));
	printf("l: %d\n", printf("s is %s %s %s hi %", "hello", world, ""));
	printf("l: %d\n", ft_printf("s is %s %s %s hi %", "hello", world, ""));
	printf("l: %d\n", printf("u is %u, x is %x ", 42, j));
	printf("l: %d\n", ft_printf("u is %u, x is %x ", 42, j));
	printf("l: %d\n", printf(" NULL %s NULL ", (const char *) NULL));
	printf("l: %d\n", ft_printf(" NULL %s NULL ", (const char *) NULL));
	printf("l: %d\n", printf("nptr is %p -1 is %p 15 is %p", nptr, -1, 15));
	printf("l: %d\n", ft_printf("nptr is %p -1 is %p 15 is %p", nptr, -1, 15));
	printf("l: %d\n", ft_printf("% Wrong percentage sign example: %) \
    and the list goes on\n"));
	printf("l: %d\n", printf("% Wrong percentage sign example: %) \
    and the list goes on\n"));
	return (0);
}

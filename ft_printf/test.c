/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:58:01 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/09 13:49:10 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*nullptr;

	nullptr = NULL;
	i = -2147483648;
	printf("l: %d\n", printf("%%_%c_%s_%p_%d_%i\n", 'a', "hi", &i, 42, i));
	printf("l: %d\n", ft_printf("%%_%c_%s_%p_%d_%i\n", 'a', "hi", &i, 42, i));
	printf("l: %d\n", printf("%p\n", nullptr));
	printf("l: %d\n", ft_printf("%p\n", nullptr));
	return (0);
}

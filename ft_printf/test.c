/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:13:42 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/02 17:55:05 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	*str = "hello";

	printf("count is: %d\n", printf("hi %c_%s_%p_%%\n", 'a', str, str));
	printf("count is: %d\n", ft_printf("hi %c_%s_%p_%%\n", 'a', str, str));
	return (0);
}

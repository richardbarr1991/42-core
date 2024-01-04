/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:15:49 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/03 15:08:21 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(void *ptr)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_print_hex((unsigned long long)ptr, 'x');
	return (14);
}

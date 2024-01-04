/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:48:51 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/03 15:08:26 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dec_len(int i)
{
	int	len;

	len = 0;
	while (i > 9)
	{
		i /= 10;
		len++;
	}
	return (++len);
}

static void	ft_put_dec(int i)
{
	if (i > 9)
		ft_put_dec(i / 10);
	ft_putchar((i % 10) + '0');
}

int	ft_print_dec(int i)
{
	ft_put_dec(i);
	return (ft_dec_len(i));
}

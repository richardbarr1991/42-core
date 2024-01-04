/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:19:33 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/03 15:08:32 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_len(unsigned long long ull)
{
	int	len;

	len = 0;
	while (ull > 15)
	{
		ull /= 16;
		len++;
	}
	return (++len);
}

static void	ft_put_hex(unsigned long long ull, char c)
{
	const char	*radix_upper = "0123456789ABCDEF";
	const char	*radix_lower = "0123456789abcdef";

	if (ull > 15)
		ft_put_hex(ull / 16, c);
	if (c == 'X')
		ft_putchar(radix_upper[ull % 16]);
	if (c == 'x')
		ft_putchar(radix_lower[ull % 16]);
}

int	ft_print_hex(unsigned long long ull, char c)
{
	ft_put_hex(ull, c);
	return (ft_hex_len(ull));
}

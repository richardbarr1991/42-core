/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dec_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:00:24 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/11 15:46:19 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_dec(int i)
{
	if (i > 9)
		ft_put_dec(i / 10);
	ft_putchar((i % 10) + '0');
	return (0);
}

int	ft_print_dec(int i)
{
	int	len;
	int	temp;

	len = 0;
	if (i == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		i = 147483648;
	}
	if (i < 0)
	{
		len += ft_putchar('-');
		i *= -1;
	}
	temp = i;
	while (temp > 9)
	{
		temp /= 10;
		len++;
	}
	ft_put_dec(i);
	return (++len);
}

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

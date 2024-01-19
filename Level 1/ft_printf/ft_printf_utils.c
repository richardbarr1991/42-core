/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:51:01 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 12:02:43 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int			len;
	const char	*nullstr = "(null)";

	len = 0;
	if (str == NULL)
	{
		while (len < 6)
			ft_putchar(nullstr[len++]);
		return (6);
	}
	while (*str)
	{
		ft_putchar(*str++);
		len++;
	}
	return (len);
}

int	ft_print_address(void *ptr)
{
	const char	*nil = "(nil)";
	int			len;

	len = 2;
	if (ptr == NULL)
		return (ft_putstr((char *)nil));
	ft_putchar('0');
	ft_putchar('x');
	len += ft_print_hex((unsigned long long)ptr, 'x');
	return (len);
}

int	ft_put_uint(unsigned int i)
{
	if (i > 9)
		ft_put_uint(i / 10);
	ft_putchar((i % 10) + '0');
	return (0);
}

int	ft_print_uint(unsigned int i)
{
	unsigned int	temp;
	int				len;

	len = 0;
	temp = i;
	while (temp > 9)
	{
		temp /= 10;
		len++;
	}
	ft_put_uint(i);
	return (++len);
}

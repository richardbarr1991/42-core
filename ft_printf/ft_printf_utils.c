/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:51:01 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/09 13:48:42 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
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

	if (ptr == NULL)
		return (ft_putstr((char *)nil));
	ft_putchar('0');
	ft_putchar('x');
	ft_print_hex((unsigned long long)ptr, 'x');
	return (14);
}

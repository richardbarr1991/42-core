/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:47:14 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/09 12:55:14 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fmt_switch(char *format, va_list args)
{
	if (*format == '%')
		return (ft_putchar('%'));
	else if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_print_address(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_dec(va_arg(args, int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), *format));
	return (0);
}

int	ft_printf(char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			len += fmt_switch(++format, args);
			format++;
		}
		else
			len += ft_putchar(*format++);
	}
	va_end(args);
	return (len);
}

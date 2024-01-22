/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:47:14 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 12:14:16 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fmt_switch(const char *format, va_list args)
{
	if (*format == '%')
		return (ft_putchar('%'));
	else if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (*format == 'p')
		return (ft_print_address(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_dec(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), *format));
	else if (*format == '\0')
		return (-1);
	else if (*format == ' ')
		return (ft_putchar('%') + ft_putchar(' '));
	else if (*format)
		return (ft_putchar('%') + ft_putchar(*format));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		temp_len;

	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			temp_len = len;
			len += fmt_switch(++format, args);
			if (temp_len <= len)
				format++;
			else
				return (-1);
		}
		else
			len += ft_putchar(*format++);
	}
	va_end(args);
	return (len);
}

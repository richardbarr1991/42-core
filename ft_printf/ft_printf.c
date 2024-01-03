/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:15:21 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/02 17:58:10 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	arg;

	count = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && format[1])
		{
			if (*(format + 1) == 'c')
				count += ft_putchar(va_arg(arg, int));
			if (*(format + 1) == 's')
				count += ft_putstr(va_arg(arg, char *));
			if (*(format + 1) == 'p')
				count += ft_putaddress(va_arg(arg, void *));
			if (*(format + 1) == '%')
				count += ft_putchar('%');
			format += 2;
		}
		else
			count += ft_putchar(*format++);
	}
	va_end(arg);
	return (count);
}

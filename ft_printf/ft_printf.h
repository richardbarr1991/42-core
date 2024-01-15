/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:52:08 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/11 15:49:00 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	fmt_switch(const char *format, va_list args);
int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_print_address(void *ptr);
int	ft_print_hex(unsigned long long ull, char c);
int	ft_print_dec(int i);
int	ft_print_uint(unsigned int i);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:57:14 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/19 15:29:25 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

void	ft_putptr(void *ptr)
{
	int		i;
	char	*address;

	i = 0;
	while (i < 8)
		i++;
}
	

void	ft_putnbr(int i)
{
	int	temp;

	temp = i;
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putchar((temp % 10) + '0');
	}
	else
		ft_putchar(temp + '0');
	return ;
}

void	ft_putuns(unsigned int i)
{
	int	temp;

	temp = i;
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putchar((temp % 10) + '0');
	}
	else
		ft_putchar(temp + '0');
	return ;
}

void	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;

	va_start(ptr, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
			{
				ft_putchar(va_arg(ptr, int)); 
				i++;
			}
			if (s[i] == 's')
			{
				ft_putstr(va_arg(ptr, char *)); 
				i++;
			}
			if (s[i] == 'd')
			{
				ft_putnbr(va_arg(ptr, int)); 
				i++;
			}
			if (s[i] == 'i')
			{
				ft_putnbr(va_arg(ptr, int)); 
				i++;
			}
			if (s[i] == 'u')
			{
				ft_putuns(va_arg(ptr, int)); 
				i++;
			}
		}
		ft_putchar(s[i]);
		i++;
	}
	return ;
}

int	main(void)
{
	char	c;
	const char	*s = "hello";
	int		dec;
	int		hex;
	unsigned int	uns;

	c = 'a';
	dec = -256;
	hex = 0x1A;
	uns = 42;
	ft_printf("%c %s %d %i %u %u world\n", c, s, dec, hex, dec, uns);
	printf("%c %s %d %i %u %u world\n", c, s, dec, hex, dec, uns);
	return (0);
}

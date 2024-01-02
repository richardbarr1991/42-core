/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:00:50 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/19 15:07:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr_dec(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_dec(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar((nbr + '0'));
}

void	ft_putnbr_bin(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 1)
	{
		ft_putnbr_bin(nbr / 2);
		ft_putchar((nbr % 2) + '0');
	}
	else
		ft_putchar((nbr + '0'));
	return ;
}

void	ft_putnbr_hex(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 15)
	{
		ft_putnbr_hex(nbr / 16, base);
		ft_putchar(base[nbr % 16]);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*dec = "0123456789";
	char	*bin= "01";
	char	*hex= "0123456789ABCDEF";
	
	if (!(ft_strncmp(base, dec, 17)))
		ft_putnbr_dec(nbr);
	if (!(ft_strncmp(base, bin, 3)))
		ft_putnbr_bin(nbr);
	if (!(ft_strncmp(base, hex, 17)))
		ft_putnbr_hex(nbr, base);
	return ;
}

int	main(void)
{
	int	nbr;
	char	*dec = "0123456789";
	char	*bin= "01";
	char	*hex= "0123456789ABCDEF";

	nbr = 15;
	ft_putnbr_base(nbr, dec);
	printf(" \n");
	ft_putnbr_base(nbr, bin);
	printf(" \n");
	ft_putnbr_base(nbr, hex);
	printf(" \n");
	return (0);
}

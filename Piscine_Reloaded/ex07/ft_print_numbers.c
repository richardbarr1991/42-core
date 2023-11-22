/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:03:08 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/22 17:05:16 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a++);
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}

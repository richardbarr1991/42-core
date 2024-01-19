/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:06:04 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/28 16:36:01 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		return ;
	}
	ft_putchar('P');
}

/*
int	main(void)
{
	int	n;

	n = -9;
	ft_is_negative(n);
	return (0);
}
*/

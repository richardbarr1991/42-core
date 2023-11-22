/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:19:28 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/24 15:35:09 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write (1, &neg, 1);
	}
	if (n > -1)
	{
		write (1, &pos, 1);
	}
}

int	main(void)
{
	int	a;

	a = -10;
	ft_is_negative(a);
	return (0);
}

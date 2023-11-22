/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:07:52 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/24 15:18:28 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	dig;
	int		count;

	dig = '0';
	count = 1;
	while (count < 11)
	{
		write (1, &dig, 1);
		dig++;
		count++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:48:53 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/24 15:01:35 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	int		count;

	a = 'a';
	count = 1;
	while (count < 27)
	{
		write (1, &a, 1);
		a++;
		count++;
	}
}

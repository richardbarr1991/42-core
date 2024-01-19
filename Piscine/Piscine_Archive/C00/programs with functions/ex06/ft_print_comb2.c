/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:11:21 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/25 13:43:54 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sub_digits_write(int count1, int count2, char digit1, char digit2)
{
	digit1 = count1 / 10 + '0';
	digit2 = count1 % 10 + '0';
	write (1, &digit1, 1);
	write (1, &digit2, 1);
	write (1, " ", 1);
	digit1 = count2 / 10 + '0';
	digit2 = count2 % 10 + '0';
	write (1, &digit1, 1);
	write (1, &digit2, 1);
	write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		count1;
	int		count2;
	char	digit1;
	char	digit2;

	count1 = 0;
	count2 = 0;
	digit1 = '0';
	digit2 = '0';
	while (count1 <= 98)
	{
		count2 = 0;
		while (count2 <= 99)
		{
			while ((count1 / 10) != (count2 / 10))
			{
				sub_digits_write(count1, count2, digit1, digit2);
				count2++;
			}
		}
		count1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

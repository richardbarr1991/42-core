/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largestnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:00:03 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/18 15:17:50 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_largestnum(int n, ...)
{
	va_list	ptr;
	int		temp;
	int		winner;
	int		i;

	i = 0;
	va_start(ptr, n);
	winner = va_arg(ptr, int);
	while (i < (n - 1))
	{
		temp = va_arg(ptr, int);
		if (temp > winner)
			winner = temp; 
		i++;
	}
	return (winner);
}

int	main(void)
{
	printf("hello\n");
	printf("%d\n", ft_largestnum(5, 2, 9, 20, 5, 2, 250));
	return (0);
}

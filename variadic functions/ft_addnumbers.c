/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:22:34 by rbarr             #+#    #+#             */
/*   Updated: 2023/12/18 14:59:40 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_addnumbers(int n, ...)
{
	va_list	ptr;
	int		sum;
	int		i;

	va_start(ptr, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	return (sum);
}

int	main(void)
{
	printf("%d\n", ft_addnumbers(2, 3, 1, 7));
	return (0);
}

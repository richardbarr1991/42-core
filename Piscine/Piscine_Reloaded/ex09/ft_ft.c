/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:45:09 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/09 15:14:36 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	*pointer;

	n = 5;
	pointer = &n;
	
	printf("address of n %p\n", &n);
	printf("dereferenced pointer %d\n", *pointer);
	ft_ft(pointer);
	printf("value of n %d\n", n);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:11:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 14:30:53 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	i;
	int	tmp;

	index = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[index - i];
		tab[index - i] = tmp;
		i++;
	}
}

int	main(void)
{
	int	myarray[6];
	int	arraylength;
	int	j;

	myarray[0] = 1;
	myarray[1] = 2;
	myarray[2] = 3;
	myarray[3] = 4;
	myarray[4] = 5;
	myarray[5] = 6;
	arraylength = 0;
	j = 1;
	while (myarray[j] != '\0')
	{
		arraylength++;
		j++;
	}
	printf("array length is: %d\n", arraylength);
	ft_rev_int_tab(myarray, arraylength);
	printf("output array is: %d %d %d %d %d %d \n", myarray[0], myarray[1], myarray[2], myarray[3], myarray[4], myarray[5]);
	return (0);
}

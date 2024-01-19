/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:32:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/02 14:19:36 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[6];
	int	size;
	int	n;
	int	a;

	tab[0] = 1;
	tab[1] = 7;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 9;
	tab[5] = 6;
	size = 0;
	n = 1;
	a = 0;
	while (tab[n])
	{
		size++;
		n++;
	}
	printf("Size is: %d\n", size);
	printf("original table is: \n");
	while (a < size)
	{
		printf("%d ", tab[a]);
		++a;
	}
	ft_sort_int_tab(tab, size);
	printf("\nsorted table is: \n");
	printf("%d %d %d ", tab[0], tab[1], tab[2]);
	printf("%d %d %d \n\n", tab[3], tab[4], tab[5]);
	return (0);
}
*/

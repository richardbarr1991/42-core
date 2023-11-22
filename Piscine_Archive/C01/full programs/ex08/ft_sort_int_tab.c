/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:32:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 14:54:41 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[6];
	int	size;
	int	j;

	tab[0] = 1;
	tab[1] = 7;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 9;
	tab[5] = 6;
	size = 0;
	j = 1;
	while (tab[j])
	{
		size++;
		j++;
	}
	printf("\nsize is: %d\n\n", size);
	printf("original table is: \n");
	for (int a = 0; a < 6; a++)
	{
		printf("%d ", tab[a]);
	}
	ft_sort_int_tab(tab, size);
	printf("\n\noutput array is: \n");
	for (int a = 0; a < 6; a++)
	{
		printf("%d ", tab[a]);
	}
	return (0);
}

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
	}
}
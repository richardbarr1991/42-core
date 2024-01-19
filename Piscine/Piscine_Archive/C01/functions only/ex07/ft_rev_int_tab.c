/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:11:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/27 15:51:58 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
/*
int	main(void)
{
	int	tab[6];
	int	size;
	int	j;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	size = 0;
	j = 1;
	while (tab[j] != '\0')
	{
		size++;
		j++;
	}
	printf("original table is: \n");
	printf("%d %d %d ", tab[0], tab[1], tab[2]);
	printf("%d %d %d \n\n", tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, size);
	printf("reversed table is: \n");
	printf("%d %d %d ", tab[0], tab[1], tab[2]);
	printf("%d %d %d \n\n", tab[3], tab[4], tab[5]);
	return (0);
}
*/

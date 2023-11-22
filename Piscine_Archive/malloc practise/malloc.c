/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:03:17 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/10 15:10:13 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	num_elements;
	int	*arr;

	printf("Enter the number of elements:");
	scanf("%d", &num_elements);
	arr = (int *)malloc(num_elements * sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed");
		return (0);
	}
	printf("Memory allocation successful");
	free(arr);
	return (0);
}

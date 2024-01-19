/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof_types.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:12:18 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/16 15:16:52 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("\n");
	printf("-BASIC TYPES-");
	printf("\n\n");

	printf("sizeof char	%lu\n", sizeof(char));
	printf("sizeof short	%lu\n", sizeof(short));
	printf("sizeof int	%lu\n", sizeof(int));
	printf("sizeof long	%lu\n", sizeof(long));

	printf("\n\n");
	printf("-POINTER TYPES-");
	printf("\n\n");

	printf("sizeof char* 	%lu\n", sizeof(char *));
	printf("sizeof short* 	%lu\n", sizeof(short *));
	printf("sizeof int* 	%lu\n", sizeof(int *));
	printf("sizeof long* 	%lu\n", sizeof(long *));
	return (0);
}

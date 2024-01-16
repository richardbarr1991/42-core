/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:51:22 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 17:52:31 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_pt {
	int	x;
	int	y;
} p;

p	makepoint(int x, int y)
{
	p	point;

	point.x = x;
	point.y = y;
	return (point);
}

int	main(void)
{
	int			x;
	int			y;
	p	pt1;

	x = 4;
	y = 9;
	pt1 = makepoint(x, y);
	printf("%d\n", pt1.x);
	printf("%d\n", pt1.y);
	return (0);
}

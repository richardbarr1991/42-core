/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:49:21 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 17:50:42 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct s_pt {
	int	x;
	int	y;
};

struct s_pt	makepoint(int x, int y)
{
	struct s_pt	point;

	point.x = x;
	point.y = y;
	return (point);
}

int	main(void)
{
	int			x;
	int			y;
	struct s_pt	pt1;

	x = 4;
	y = 9;
	pt1 = makepoint(x, y);
	printf("%d\n", pt1.x);
	return (0);
}

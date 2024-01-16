/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:57:09 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 18:32:25 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
	int				x;
	struct s_list	*next;
} t_list;

int	main(void)
{
	t_list	root;
	t_list	*curr;

	root.x = 42;
	root.next = malloc(sizeof(t_list));
	root.next->x = 1337;
	root.next->next = malloc(sizeof(t_list));
	root.next->next->x = -12;
	root.next->next->next = NULL;
	curr = &root;
	while (curr != NULL)
	{
		printf("x is: %d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_iterate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:27:09 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/16 15:10:57 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				x;
	struct s_list	*next;
}	t_list;

int	main(void)
{
	t_list	root;
	t_list	*curr;

	curr = &root;
	root.x = 42;
	root.next = malloc(sizeof(t_list));
	root.next->x = 1337;
	root.next->next = malloc(sizeof(t_list));
	root.next->next->x = -21;
	root.next->next->next = NULL;
	while (curr != NULL)
	{
		printf("curr address is: %p\n", curr);
		curr = curr->next;
	}
	printf("curr address is: %p\n", curr);
	printf("size of int:	%lu\n", sizeof(int));
	return (0);
}

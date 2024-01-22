/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:54:13 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/16 17:03:59 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				x;
	struct s_list	*next;
}					t_list;

void	append(t_list **root, int value)
{
	t_list	*new_node;
	t_list	*curr;

	curr = *root;
	new_node = malloc(sizeof(t_list));
	new_node->next = NULL;
	new_node->x = value;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

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
	curr = &root;
	append(&curr, 50);
	while (curr != NULL)
	{
		printf("curr address is: %p\n", curr);
		printf("curr x is: %d\n", curr->x);
		curr = curr->next;
	}
	printf("curr address is: %p\n", curr);
	return (0);
}

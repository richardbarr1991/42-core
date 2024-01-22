/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_addelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:18:03 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/16 15:42:19 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				x;
	struct s_list	*next;
}					t_list;

int	addelem(t_list *root)
{
	t_list	*curr;
	int		count;
	int		i;

	i = 1;
	count = 0;
	curr = root;
	while (curr != NULL)
	{
		printf("curr address is: %p\n", curr);
		count++;
		curr = curr->next;
	}
	printf("count is: %d\n", count);
	curr = root;
	while (i < count)
	{
		curr = curr->next;
		i++;
	}
	curr->next = malloc(sizeof(t_list));
	curr->next->x = 10;
	curr->next->next = NULL;
	return (count);
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
	addelem(&root);
	curr = &root;
	while (curr != NULL)
	{
		printf("curr address is: %p\n", curr);
		curr = curr->next;
	}
	printf("curr address is: %p\n", curr);
	return (0);
}

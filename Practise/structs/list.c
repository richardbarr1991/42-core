#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list {
	int		i;
	struct s_list	*next;
} t_list;

int	main(void)
{
	t_list	root;
	t_list	*next;

	root.i = 5;
	printf("%d\n", root.i);
	next = malloc(sizeof(t_list));
	printf("sizeof struct s_list: %lu\n", sizeof(struct s_list));
	free(next);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int	a;
	int	b;

	a = argv[1][0] - 48;
	b = argv[2][0] - 48;
	printf("a was %d, b was %d\n", a, b);
	ft_swap(&a, &b);
	printf("a is now %d, b is now %d\n", a, b);
	}
	return (0);
}

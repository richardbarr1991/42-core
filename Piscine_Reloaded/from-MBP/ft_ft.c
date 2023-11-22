void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>

int	main(void)
{
	int	n;
	int	*pointer;

	n = 5;
	pointer = &n;
	
	printf("address of n %p\n", &n);
	printf("dereferenced pointer %d\n", *pointer);
	ft_ft(pointer);
	printf("value of n %d\n", n);
	return (0);
}

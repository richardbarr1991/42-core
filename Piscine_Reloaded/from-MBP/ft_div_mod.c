void    ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	a, b, div, mod;
		
		a = argv[1][0] - 48;
		b = argv[2][0] - 48;
		ft_div_mod(a, b, &div, &mod);
		printf("%d over %d is %d remainder %d \n", a, b, div, mod);
	}
	return (0);
}

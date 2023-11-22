int	ft_iterative_factorial(int nb)
{
	int	i;
	
	i = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			i *= i + 1;
			i++;
		}
		return (i);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	nb;

	nb = atoi(argv[1]);
	if (argc == 2)
	{
		printf("%d\n", ft_iterative_factorial(nb));
		printf("%f\n", tgamma(nb + 1));
	}
	return (0);
}

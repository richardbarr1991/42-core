#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		return;
	}
	ft_putchar('P');
}

#include <string.h>
#include <stdlib.h>
#include <math.h>

int	main(void)
{
	int	n;

	n = -9;
	ft_is_negative(n);
	return (0);
}

int	ft_sqrt(int nb)
{
	int	low, mid, high;
	int	result;

	low = 0;
	high = nb;
	
	while (low <= nb)
	{
		mid = (low + high / 2);

		if (mid * mid == nb)
		{
			result = mid;
			return (result);
		}
		else if (mid * mid < nb)
		{
			low = mid + 1;
			result = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	n;
	
	n = 25;
	printf("root %d is %d\n", n, ft_sqrt(n));
	return (0);
}

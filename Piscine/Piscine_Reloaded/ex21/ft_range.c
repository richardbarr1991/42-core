#include <stdlib.h>

int	length(int min, int max)
{
	int	i;

	i = max - min;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	len = length(min, max);
	arr = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
	int	min;
	int	max;
	int	i;
	int	len;

	min = argv[1];
	max = argv[2];
	i = 0;
	len = length(min, max) / sizeof(int);
	while (i != '\0')
	{
		printf("%d, ", ft_range(min, max)[0]);
		i++;
	}	
	}
	return (0);
}

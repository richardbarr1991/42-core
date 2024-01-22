#include <stdio.h>
#include <stdlib.h>

char	*fillworld(char *str)
{
	char	*world;
	int		i;

	world = " world";
	i = 0;
	while (str[i] != '\0')
		i++;
	while (world[i] != '\0')
	{
		str[i] = world[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*fillstr(char *str)
{
	char	*hello;
	char	*world;
	int		i;

	hello = "hello";
	world = (char *)malloc(6 * sizeof(char));
	i = 0;
	while (i < 5)
	{
		str[i] = hello[i];
		i++;
	}
	str[i] = '\0';
	return (world);
}

int	main(void)
{
	char	*str;

	str = (char *)malloc(6 * sizeof(char));
	str = fillstr(str);
	printf("%s\n", str);
	free(str);
	// free(world);
	return (0);
}

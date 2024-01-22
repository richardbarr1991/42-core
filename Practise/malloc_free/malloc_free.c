#include <stdio.h>
#include <stdlib.h>

void	appendstr(char *str)
{
	char	*world;
	int		i;
	int		j;

	world = " world";
	i = 0;
	while (str[i] != '\0')
		i++;
	j = 0;
	while (world[j] != '\0')
	{
		str[i + j] = world[j];
		j++;
	}
	str[i + j] = '\0';
}

void	fillstr(char *str)
{
	char	*hello;
	int		i;

	hello = "hello";
	for (i = 0; i < 5; i++)
	{
		str[i] = hello[i];
	}
	str[i] = '\0';
}

int	main(void)
{
	char	*str;

	str = malloc(6 * sizeof(char));
	fillstr(str);
	printf("%s\n", str);
	free(str);
	return (0);
}

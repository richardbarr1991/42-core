#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	 *dest; 

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n", ft_strdup(argv[1]));
		printf("%s\n", strdup(argv[1]));
	}
	return (0);
}

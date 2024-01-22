#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *src)
{
	char	*result;
	int		i;

	i = 0;
	if (!src[i])
		return ;
	result = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (NULL == result)
		return (0);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
		str = ft_strcpy(argv[1]);
	printf("%s\n", str);
	free(str);
	return (0);
}

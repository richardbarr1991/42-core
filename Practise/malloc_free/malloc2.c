#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	if (!src[i])
		return ;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	if (NULL == str)
		return (0);
	printf("%s\n", str);
	if (argc == 2)
		ft_strcpy(str, argv[1]);
	printf("%s\n", str);
	free(str);
	return (0);
}

#include "concat-args.h"

char	*concat_args(int argc, char **argv)
{
	char	*res;
	char	*temp;
	char	*addspace;
	int		i;

	i = 1;
	res = ft_strjoin(argv[i], " ");
	temp = res;
	i++;
	while (i < argc)
	{
		addspace = ft_strjoin(argv[i], " ");
		res = ft_strjoin(temp, addspace);
		free(addspace);
		free(temp);
		temp = res;
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	char	*concatted;

	if (argc < 2)
		return (1);
	concatted = concat_args(argc, argv);
	if (!concatted)
		return (1);
	printf("concatenated args:\n%s\n", concatted);
	free(concatted);
	return (0);
}

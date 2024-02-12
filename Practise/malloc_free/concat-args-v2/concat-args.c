#include "concat-args.h"

char	*concat_args(int argc, char **argv)
{
	char	*concat_str;
	char	*arg_with_space_added;
	int		i;

	i = 1;
	concat_str = "";
	arg_with_space_added = ft_strjoin(argv[i], " ");
	concat_str = ft_strjoin(concat_str, arg_with_space_added);
	free (arg_with_space_added);
	return (concat_str);
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

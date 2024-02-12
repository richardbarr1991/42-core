#include "concat-args.h"

char	*concatenate_args(int argc, char **argv)
{
	char	*concat_str;
	char	*arg_with_space_added;
	char	*temp;
	int		i;

	concat_str = "";
	i = 1;
	while (i < argc)
	{
		arg_with_space_added = ft_strjoin(argv[i], " ");
		if (!arg_with_space_added && i != 1)
		{
			free(concat_str);
			return (NULL);
		}
		temp = concat_str;
		concat_str = ft_strjoin(concat_str, arg_with_space_added);
		free(arg_with_space_added);
		if (i != 1)
			free(temp);
		if (!concat_str)
			return (NULL);
		i++;
	}
	return (concat_str);
}

int	main(int argc, char **argv)
{
	char	*concatenated_args;

	if (argc < 2)
		return (1);

	concatenated_args = concatenate_args(argc, argv);
	if (!concatenated_args)
		return (1);

	printf("Concatenated arguments: %s\n", concatenated_args);

	free(concatenated_args);
	return (0);
}

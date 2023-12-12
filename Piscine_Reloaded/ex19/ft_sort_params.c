#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);	
}

int	length(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 0;
	while (i < argc)
	{
		len = length(argv[i]);
			while(len > 0)
			{
				while (argv[i][j] != '\0')
				{
				if (argv[i][j+1] != '\0' && argv[i][j] > argv[i][j + 1])
				{
					char	temp;

					temp = argv[i][j + 1];
					argv[i][j + 1] = argv[i][j];
					argv[i][j] = temp;
				}
				j++;
				}
			j = 0;
			len--;
			}
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		++i;
		j = 0;
	}
	return (0);
}

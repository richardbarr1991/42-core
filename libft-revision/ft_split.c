/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:50:50 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/15 15:14:44 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(const char *str, int c, int crt)
{
	int	len;
	int	split_count;
	int	i;

	len = 0;
	split_count = 0;
	i = 0;
	while (split_count < crt)
	{
		if (c == str[i])
			split_count++;
		i++;
	}
	while (c != str[i] && '\0' != str[i])
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_numsplits(const char *str, int c)
{
	int	numsplits;
	int	i;

	numsplits = 0;
	i = 0;
	if ('\0' != str[i])
		numsplits = 1;
	while ('\0' != str[i])
	{
		if (c == str[i])
			numsplits++;
		i++;
	}
	return (numsplits);
}

char	**ft_split(const char *str, int c)
{
	char	**res;
	int		numsplits;
	int		crt;
	int		i;
	int		j;

	res = NULL;
	numsplits = ft_numsplits(str, c);
	crt = 0;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (numsplits + 1));
	while (crt < numsplits)
	{
		j = 0;
		res[crt] = (char *)malloc(sizeof(char) * (ft_len(str, c, crt) + 1));
		while (str[i] != c && str[i] != '\0')
			res[crt][j++] = str[i++];
		if (str[i] == c)
			i++;
		crt++;
	}
	res[crt] = NULL;
	return (res);
}

int	main(void)
{
	const char	*string = "hezllo zworzld";
	int			c;
	int			i;

	c = 'z';
	i = 0;
	printf("numsplits is: %d\n", ft_numsplits("", c));
	printf("numsplits is: %d\n", ft_numsplits("hi", c));
	printf("numsplits is: %d\n", ft_numsplits(string, c));
	printf("len 0 is: %d\n", ft_len(string, c, 0));
	printf("len 1 is: %d\n", ft_len(string, c, 1));
	// printf("split 0 is: %s\n", ft_split(string, c)[0]);
	// printf("split 1 is: %s\n", ft_split(string, c)[1]);
	// printf("split 2 is: %s\n", ft_split(string, c)[2]);
	// printf("split 3 is: %s\n", ft_split(string, c)[3]);
	while (ft_split(string, c)[i] != NULL)
	{
		printf("split %d is: %s\n", i, ft_split(string, c)[i]);
		i++;
	}
	printf("split %d is: %s\n", i, ft_split(string, c)[i]);
	return (0);
}

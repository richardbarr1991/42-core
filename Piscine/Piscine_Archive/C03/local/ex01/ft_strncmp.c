/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:41:51 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/10 12:56:42 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "Helko";
	char	s2[] = "Hello";
	char	s3[] = "Hell";
	char	s4[] = "Bling";
	char	s5[] = "hi guys whassuuuuup";
	char	s6[] = "hi guys whassuuuuuppp";

	printf("1v2 is: %d\n", ft_strncmp(s1, s2, 3));
	printf("1v2 strncmp is: %d\n", strncmp(s1, s2, 3));
	printf("2v3 is: %d\n", ft_strncmp(s2, s3, 5));
	printf("2v3 stnrcmp is: %d\n", strncmp(s2, s3, 5));
	printf("3v4 is: %d\n", ft_strncmp(s3, s4, 4));
	printf("3v4 stnrcmp is: %d\n", strncmp(s3, s4, 4));
	printf("5v6 is: %d\n", ft_strncmp(s5, s6, 4));
	printf("5v6 stnrcmp is: %d\n", strncmp(s5, s6, 4));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:20:56 by rbarr             #+#    #+#             */
/*   Updated: 2023/08/08 16:33:21 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main(void)
{
    char    str1[] = "Hello";
    char    str2[] = "Hello";
    char    str3[] = "Hell";
    char    str4[] = "Bling";
    printf("\n Return value for str1 str 2 is %d\n", ft_strcmp(str1, str2));
    printf("strcmp Return value for str1 str 2 is %d\n", strcmp(str1, str2));
    printf("Return value for str3 str 4 is %d\n", ft_strcmp(str3, str4));
    printf("strcmp Return value for str3 str 4 is %d\n\n", strcmp(str3, str4));
    return (0);
}
*/

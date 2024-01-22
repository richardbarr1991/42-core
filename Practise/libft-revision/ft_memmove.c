/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:15:25 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/09 12:49:06 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *s_str = (char *)s;
	size_t i = 0;

	while (i < n)
		s_str[i++] = '\0';
	return ;
}

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_str = (char *)src;
	char	*dst_str = (char *)dst;
	char	*temp;
	size_t src_len;

	src_len = ft_strlen(src_str);
	temp = (char *)malloc((src_len + 1) * sizeof(char));
	ft_bzero(temp, (src_len + 1));
	while (*src_str != '\0')
		*temp++ = *src_str++;
	*temp = '\0';
	temp -= src_len;
	return (temp);
}

int	main(void)
{
	char *src = "source";
	char *dst = "destination";
	size_t n = 10;
	char *result;

	result = (char *)ft_memmove(dst, src, n);
	printf("temp is %s\n", result);
	free(result);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:13:43 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/15 16:56:06 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = str;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
	return ;
}

/*
#include <stdio.h>

int	main(void)
{
	const char	buffer[] = "hello world";

	printf("%s\n", buffer);
	ft_bzero((void *)buffer, 5);
	printf("%s\n", buffer);
	return (0);
}
*/

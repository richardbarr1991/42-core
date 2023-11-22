/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:34:25 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/15 15:59:19 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr = str;
	size_t	i;

	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	buffer[] = "hello world";

	ft_memset(buffer, 'a', 5);
	printf("%s", buffer);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:13:43 by rbarr             #+#    #+#             */
/*   Updated: 2023/11/13 17:25:22 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr = str;
	size_t	i;

	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return;
}

int	main(void)
{
	const char	buffer[] = "hello world";
	
	printf("%s\n", buffer);
	ft_bzero((void *)buffer, 5);
	printf("%s\n", buffer);
	return (0);
}

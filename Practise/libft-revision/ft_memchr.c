/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:27:10 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/08 17:31:34 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s_str = (unsigned char *)s;

	i = 0;
	while (i < n & src[i] != c)
	{
		i++;
	}
	return (src);
}

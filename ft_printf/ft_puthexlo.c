/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:30:17 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/02 17:53:04 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexlo(unsigned long long ull)
{
	const char	*radix = "0123456789abcdef";

	if (ull > 15)
		ft_puthexlo(ull / 16);
	ft_putchar(radix[ull % 16]);
}

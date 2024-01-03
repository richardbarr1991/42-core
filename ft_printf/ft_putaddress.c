/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:28:27 by rbarr             #+#    #+#             */
/*   Updated: 2024/01/02 17:55:33 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddress(void *ptr)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_puthexlo((unsigned long long)ptr);
	return (14);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlv4.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:53:56 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/01 17:35:46 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNLV4_H
# define GNLV4_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*gnlv4(int);

#endif

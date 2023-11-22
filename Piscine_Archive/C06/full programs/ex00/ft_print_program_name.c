/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:20:54 by rbarr             #+#    #+#             */
/*   Updated: 2023/07/25 16:34:09 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int		name_length;
	char	*program_name;

	*program_name = argv[0];
	name_length = strlen(program_name);
	write (1, program_name, name_length);
	return (0);
}

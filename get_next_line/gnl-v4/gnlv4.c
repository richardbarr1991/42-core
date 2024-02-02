/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlv4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/02 16:54:11 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlv4.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*new;
	int		i;

	new = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	printf("new is: %s\n", new);
	return (new);
}

char	*fillstash(int fd, char *buffer, char *remainder)
{
	char	*temp;
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (!remainder)
			remainder = ft_strdup("hi");
		temp = remainder;
		temp = ft_strjoin(temp, buffer);

	}
	// free(temp);
	return (temp);
}

char	*gnlv4(int fd)
{
	static char	*remainder;
	char		*buffer;
	char		*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (0);
	free(buffer);
	stash = fillstash(fd, buffer, remainder);
	return (stash);
}

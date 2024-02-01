/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlv4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:56:26 by rbarr             #+#    #+#             */
/*   Updated: 2024/02/01 17:35:28 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlv4.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	free(s1);
	free(s2);
	return (str);
}

int	ft_nlfound(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*gnlv4(int fd)
{
	char	*buffer;
	char	*stash;
	int		bytes_read;
	int		nlfound;

	stash = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (stash == NULL)
		return (NULL);
	stash[0] = '\0';
	bytes_read = BUFFER_SIZE;
	nlfound = 0;
	while (bytes_read == BUFFER_SIZE && nlfound == 0)
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		stash = ft_strjoin(stash, buffer);
		nlfound = ft_nlfound(buffer);
	}
	return (stash);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:16:02 by richardbarr       #+#    #+#             */
/*   Updated: 2024/02/08 19:22:59 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int nl_counter(int fd)
{
	char *buf;
	char *temp;
	int bytes_read;
	int i;
	int nl_count;

	bytes_read = BUFFER_SIZE;
	buf = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	temp = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			break;
		buf[bytes_read] = '\0';
		temp = ft_strjoin(temp, buf);
	}
	i = 0;
	nl_count = 0;
	while (temp[i])
		if (temp[i++] == '\n')
			nl_count++;
	return (nl_count);
}

int main(void)
{
	char *nextline;

	printf("\nBUFFER_SIZE:	%d\n\n", BUFFER_SIZE);
	printf("--- STDIN_TEST ---\n");
	printf("Please enter some text:\n");
	nextline = get_next_line(STDIN_FILENO);
	printf("\nText entered was:\n");
	printf("%s\n", nextline);
	printf("\n");
	free(nextline);
	return (0);
}

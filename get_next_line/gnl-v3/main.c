/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: richardbarr <richardbarr@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:51:33 by richardbarr       #+#    #+#             */
/*   Updated: 2024/02/08 19:47:30 by richardbarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ch_counter(int fd)
{
	char *buf;
	char *temp;
	int bytes_read;
	int ch_count;

	bytes_read = BUFFER_SIZE;
	buf = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	temp = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			break;
		buf[bytes_read] = '\0';
		temp = join_free(temp, buf);
	}
	ch_count = 0;
	while (temp[ch_count])
			ch_count++;
	return (ch_count);
}

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
		temp = join_free(temp, buf);
	}
	i = 0;
	nl_count = 0;
	while (temp[i])
		if (temp[i++] == '\n')
			nl_count++;
	return (nl_count);
}

void	run_tests(const char **files)
{
	char	*nextline;
	char	*crt_file;
	int		fd;
	int		nl_count;
	int		ch_count;
	int		loop_count;
	int		print_count;
	int		i;

	i = 0;
	while (files[i] && i < 3)
	{
		printf("--- TEST %d ---\n", i + 1);
		crt_file = (char *)files[i];
		fd = open(crt_file, O_RDONLY);
		printf("file:	%s\n", crt_file);
		printf("fd:	%d\n", fd);
		lseek(fd, 0, SEEK_SET);
		nl_count = nl_counter(fd);
		printf("lines:	%d\n", nl_count);
		lseek(fd, 0, SEEK_SET);
		ch_count = ch_counter(fd);
		printf("chars:	%d\n", ch_count);
		lseek(fd, 0, SEEK_SET);
		loop_count = 0;
		print_count = 0;
		while ((nextline = get_next_line(fd)))
		{
			print_count += printf("%s", nextline);
			loop_count++;
		}
		printf("%s\n", nextline);
		if (nl_count == loop_count)
			printf("√ ALL LINES PRINTED\n");
		else
			printf("X WRONG NUMBER OF LINES PRINTED\n");
		if (ch_count == print_count)
			printf("√ ALL CHARS PRINTED\n");
		else
			printf("X WRONG NUMBER OF CHARS PRINTED\nChars printed: %d of %d\n", print_count, ch_count);
		printf("\n");
		free(nextline);
		i++;
	}
	return ;
}

int main(void)
{
	const char	**files;
	int			file_count;
	char	*nextline;

	file_count = 3;
	files = (const char **)malloc(file_count * sizeof(char *));
	files[0] = "short_line.txt";
	files[1] = "lorem_line.txt";
	files[2] = "10_short_lines.txt";

	printf("\nBUFFER_SIZE:	%d\n\n", BUFFER_SIZE);
	printf("--- ERRORS ---\n");
	nextline = get_next_line(-1);
	printf("fd=-1:	%s\n", nextline);
	printf("\n");
	free(nextline);

	run_tests(files);

	return (0);
}

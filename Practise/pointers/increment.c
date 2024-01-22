#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*str_lit = "hello";
	char		*str_lit_start;
	char		*str;

	str_lit_start = (char *)str_lit;
	str = (char *)malloc(sizeof(char) * 10);
	while (*str_lit)
		printf("%c", *str_lit++);
	printf("\n");
	str_lit = str_lit_start;
	while (*str_lit)
		*str++ = *str_lit++;
	str -= 5;
	printf("%s\n", str);
	return (0);
}

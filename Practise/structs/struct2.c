#include <stdio.h>
#include <unistd.h>

struct mystruct
{
	int	x;
	int	y;
};

typedef struct s_ck {
	char	c;
	char	k;
} ck;

int	main(void)
{
	struct mystruct point;
	ck		ck1;

	point.x = 5;
	point.y = 10;
	ck1.c = 'a';
	ck1.k = 'z';
	printf("%d\n", point.x);
	printf("%c\n", ck1.c);
	printf("%c\n", ck1.k);
	return (0);
}

#include <stdio.h>
#include <unistd.h>

void	str_len(char *nb)
{
	int	length;
	int	templength;

	int     power;
	int	total;
	int	temp;
	int	i;
	int 	j;

	length = 0;
	power = 1;
	total = 0;
	temp = 0;
	i = 0;
	j = 0;

	while (nb[i] != '\0')
	{
		length++;
		i++;
	}
	templength = length;
	i = 0;
	while (i < length)
	{
		while (j < (templength - 1))
		{
			power *= 10;
			j++;
		}
		temp = nb[i] - 48;
		total = total + temp * power;
		templength--;
		i++;
		j = 0;
		power = 1;
	}
	printf("total is: %d\n", total);
	if (!((total >= 0) && (total <= 9)))
	{
		return;
	}

	char	one[] = "one";
	char	five[] = "five";

	if (total == 5)
	{
		printf("number is %s\n", five);
	}	
}

int	main(void)
{
	char	sngl[100] = "5";
	char	str[100] = "25";
	char    trpl[1000] = "1265";
	char 	quad[10000] = "12345";	

	str_len(str);
	str_len(trpl);
	str_len(quad);
	str_len(sngl);

	return (0);
}





CFLAGS:= -Wall -Wextra -Werror

all: libft.a

libft.a: srcs/ft_putchar.o
	ar rcs libft.a srcs/ft_putchar.o

ft_putchar.o: srcs/ft_putchar.c
	cc ${CFLAGS} -c srcs/ft_putchar.c -o srcs/ft_putchar.o

clean:
	rm srcs/ft_putchar.o

fclean: clean
	rm -f srcs/ft_putchar.o

re: fclean all

.PHONY: clean fclean 

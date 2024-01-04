CC:= cc
FLAGS:= -Wall -Wextra -Werror
SRCS:= ft_printf.c ft_putchar.c ft_putstr.c ft_print_address.c ft_print_hex.c ft_print_dec.c
TEST:= test.c
OBJS = $(SRCS:.c=.o)
RM:= rm -f
NAME:= libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

run:
	${CC} ${FLAGS} ${SRCS} ${TEST}
	./a.out
	${RM} test.o a.out

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

CC:= cc
FLAGS:= -Wall -Wextra
SRCS:= ft_printf.c ft_printf_utils.c ft_printf_dec_hex.c
OBJS = $(SRCS:.c=.o)
RM:= rm -f
NAME:= libftprintf.a
TEST:= test.c

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

run:
	${CC} ${FLAGS} ${SRCS} ${TEST}
	./a.out
	${RM} test.o a.out

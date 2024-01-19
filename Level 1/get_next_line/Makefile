CC:= cc
FLAGS:=	-Wall -Wextra
SRCS:=	get_next_line.c get_next_line_utils.c
RM:= rm -f
TEST:= test.c

all:
	cc get_next_line.c get_next_line_utils.c test.c
	./a.out

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

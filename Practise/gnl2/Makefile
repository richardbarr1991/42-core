CC:=	cc
FLAGS:=	-Wall -Wextra -Werror
SRCS:=	get_next_line.c get_next_line_utils.c
TEST:=	test.c

all:
	cc -g ${SRCS} ${TEST} -D BUFFER_SIZE=11
	./a.out

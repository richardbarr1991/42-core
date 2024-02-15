BUF_SIZE1:= BUFFER_SIZE=1
BUF_SIZE2:= BUFFER_SIZE=10
CC:= cc
CFLAGS:= -Wall -Wextra -g -D
SRCS:= get_next_line.c get_next_line_utils.c gnl_tester.c
OUT:= gnl.out
RM:= rm -f
VALG:= valgrind --leak-check=full

all:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS} -o ${OUT}
	valgrind ./${OUT}

2:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS} -o ${OUT}
	valgrind ./${OUT}
	${CC} ${CFLAGS} ${BUF_SIZE2} ${SRCS} -o ${OUT}
	valgrind ./${OUT}

valg:
	${CC} ${CFLAGS} ${BUF_SIZE} ${SRCS} -o ${OUT}
	${VALG} ./${OUT}

docker:
	valg

clean:
	${RM} ${OUT}

fclean: clean
	${RM} a.out

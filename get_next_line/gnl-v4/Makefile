BUF_SIZE1:= BUFFER_SIZE=1
BUF_SIZE2:= BUFFER_SIZE=20
BUF_SIZE3:= BUFFER_SIZE=1000
CC:= cc
CFLAGS:= -Wall -Wextra -g -D
SRCS:= get_next_line.c get_next_line_utils.c gnl_tester.c
OUT:= a.out
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
	${CC} ${CFLAGS} ${BUF_SIZE3} ${SRCS} -o ${OUT}
	valgrind ./${OUT}

valg:
	${CC} ${CFLAGS} ${BUF_SIZE2} ${SRCS} -o ${OUT}
	${VALG} ./${OUT}

carlo:
	docker run -it -v $PWD:/home/root carlo-ubuntu

paco:
	sh ~/francinette/tester.sh

home:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS} -o ${OUT}
	./${OUT}

home2:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS} -o ${OUT}
	./${OUT}
	${CC} ${CFLAGS} ${BUF_SIZE2} ${SRCS} -o ${OUT}
	./${OUT}

home3:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS} -o ${OUT}
	./${OUT}
	${CC} ${CFLAGS} ${BUF_SIZE2} ${SRCS} -o ${OUT}
	./${OUT}
	${CC} ${CFLAGS} ${BUF_SIZE3} ${SRCS} -o ${OUT}
	./${OUT}

clean:
	${RM} ${OUT}

fclean: clean
	${RM} a.out

.PHONY:
	all clean fclean

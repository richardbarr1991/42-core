BUF_SIZE1:= BUFFER_SIZE=1
BUF_SIZE2:= BUFFER_SIZE=20
BUF_SIZE3:= BUFFER_SIZE=1000
CC:= cc
CFLAGS:= -Wall -Wextra -D
SRCS:= *.c

all:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS}
	valgrind ./a.out

2:
	${CC} ${CFLAGS} ${BUF_SIZE1} ${SRCS}
	valgrind ./a.out
	${CC} ${CFLAGS} ${BUF_SIZE2} ${SRCS}
	valgrind ./a.out
	${CC} ${CFLAGS} ${BUF_SIZE3} ${SRCS}
	valgrind ./a.out

CC:= cc
CFLAGS:= -Wall -Wextra
SRCS:= ft_strjoin-test.c
RM:= rm
PWD:= ./

all:
	docker run -it -v ${PWD}:/tmp -w /tmp valgrind1

valgrind:
	${CC} ${SRCS} ${CFLAGS}
	valgrind ./a.out

comp:
	${CC} ${SRCS} ${CFLAGS}
	./a.out
	make clean

clean:
	${RM} a.out

CC:= cc
CFLAGS:= -Wall -Wextra -g
SRCS:= concat-args.c
RM:= rm
PWD:= ./
ARGS:= hi hello

all:
	${CC} ${CFLAGS} ${SRCS}
	valgrind ./a.out ${ARGS}

leak:
	${CC} ${CFLAGS} ${SRCS}
	valgrind --leak-check=full ./a.out ${ARGS}

docker:
	docker run -it -v ${PWD}:/tmp -w /tmp valgrind1

clean:
	${RM} a.out

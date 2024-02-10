BUFSIZE:= -D BUFFER_SIZE=45
CC:= cc
CFLAGS:= -Wall -Wextra -g
SRCS:= get_next_line.c main.c
STDIN:= get_next_line.c test_stdin.c
OUT:= gnl_test
RM:= rm -f

ifdef BUFFER_SIZE
BUFSIZE:= -D BUFFER_SIZE=$(BUFFER_SIZE)
endif

all:
	clear
	make clean
	${CC} ${CFLAGS} ${BUFSIZE} ${SRCS} -o ${OUT}
	./${OUT}

leaks:
	clear
	make clean
	${CC} ${CFLAGS} ${BUFSIZE} ${SRCS} -o ${OUT}
	leaks -atExit -- ./${OUT}

stdin:
	clear
	make clean
	${CC} ${CFLAGS} ${BUFSIZE} ${STDIN} -o ${OUT}
	./${OUT}

clean:
	${RM} ${OUT}

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 16:32:33 by rbarr             #+#    #+#              #
#    Updated: 2024/01/02 17:33:13 by rbarr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= cc
FLAGS:= -Wall -Wextra -Werror
SRCS:= test.c ft_printf.c ft_putchar.c ft_putstr.c ft_putaddress.c ft_puthexlo.c
OBJS:= ${SRCS:.c=.o}
RM:= rm -f
NAME:= libft.a

all: comp
	./a.out

comp: norm
	${CC} ${FLAGS} ${SRCS}

norm:
	norminette ${SRCS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean
	${NAME}

.PHONY: clean, fclean, re

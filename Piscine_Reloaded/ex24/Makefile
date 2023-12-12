SRCS: srcs/ft_putstr.c 

OBJS: $(SRCS:.c=.o)

CC: gcc
CFLAGS: -Wall -Wextra -Werror
RM: rm -f

NAME: libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all

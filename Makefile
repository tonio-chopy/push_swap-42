NAME = push_swap
SRCS = push_swap.c \

OBJS =	${SRCS:.c=.o}

CC =	cc

CFLAGS =	 -Wall -Werror -Wextra

$(NAME):    $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):    $(SRCS)
	$(CC) $(CFLAGS) -c $^

all:    $(OBJS) $(NAME)

clean:
	rm -f ${OBJS}

fclean:	clean;
	rm -f ${NAME}

re:	fclean all

CFLAGS =	-Wall -Wextra -Werror
SRCS =	srcs/ft_atoi.c srcs/main.c srcs/push_swap_operations.c srcs/radix_sort.c srcs/small_sort.c srcs/stacks.c srcs/utils.c
OBJS =	$(SRCS:.c=.o)
NAME =	push_swap

all:	$(NAME)

$(NAME):	$(OBJS) Makefile
		cc -o $(NAME) $(OBJS)

%.o:	%.c Makefile
		cc $(CFLAGS) -Iincludes -o $@ -c $<

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

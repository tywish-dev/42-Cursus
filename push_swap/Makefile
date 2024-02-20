NAME	=	push_swap

SRCS	=	push_swap.c qsort.c sort.c utils/push.c \
			utils/rev_rot.c utils/rotation.c utils/swap.c \
			utils/utils.c
OBJS	= $(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -f
CFLAGS	= -Wall -Wextra -Werror -g

$(NAME): $(OBJS)
		make -C libft -s
		make -C ft_printf -s
		$(CC) $(OBJS) -o $(NAME) libft/libft.a ft_printf/libftprintf.a

all: $(NAME)

clean:
		make clean -C libft -s
		make clean -C ft_printf -s
		${RM} ${OBJS}

fclean: clean
		make fclean -C libft -s
		make fclean -C ft_printf -s
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
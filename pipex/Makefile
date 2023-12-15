NAME = pipex
CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRCS = 	pipex.c \
		utils.c \
		libft/libft.a \

$(NAME) :
	make all -C libft
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
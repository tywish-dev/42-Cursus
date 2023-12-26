NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCS = main.c swap.c push.c rotate.c reverse_rotate.c \
		utils.c stack.c \
		
OBJS = $(SRC:.c=.o)

RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
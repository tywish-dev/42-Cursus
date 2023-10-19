CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf
ARFLAGS = -rcs
RM = rm -rf

SRCS = 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

bonus: all

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME).a $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re, bonus
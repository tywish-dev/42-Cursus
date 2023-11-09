CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = include
LIBFTDIR = ./libft/
NAME = libftprintf.a
ARFLAGS = -rcs
RM = rm -rf

SRCS = ft_print_char.c ft_print_hex.c ft_print_int.c ft_print_uint.c \
		ft_print_pointer.c ft_print_string.c ft_printf.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	cd $(LIBFTDIR) && make clean

fclean: clean
	$(RM) $(NAME)
	cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY: all, clean, fclean, re, bonus
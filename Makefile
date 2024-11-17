CC = gcc
NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putaddress.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_utnbr.c
HEAD = ft_printf.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
	@ar -rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# Compiler and compiling flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Project files
SRC = ft_printf.c ft_print_char.c ft_print_string.c ft_print_pointer.c \
      ft_print_integer.c ft_print_unsigned.c ft_print_hex_lowercase.c \
      ft_print_hex_uppercase.c ft_print_percent.c ft_check.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a
INCLUDES = -Ilibft -I.

# Name of the binary
NAME = ft_printf

all: clean $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

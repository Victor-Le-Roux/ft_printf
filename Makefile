NAME 		= libftprintf.a
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror
LIB 		= libft/libft.a
SRC 		= ft_print_char.c\
				ft_printf.c\
				ft_print_hex_lowercase.c\
				ft_print_hex_uppercase.c\
				ft_print_integer.c\
				ft_print_percent.c\
				ft_print_pointer.c\
				ft_print_string.c\
				ft_print_unsigned.c
OBJ 		= $(SRC:.c=.o)

all: $(NAME)

bonus: $(NAME)

debug:
	$(eval CFLAGS += -g)
	$(MAKE) all

$(NAME): $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar rs $(NAME) $(OBJ)

$(LIB): 
	$(MAKE) -C $$(dirname $@)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $$(dirname $(LIB));
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

re: fclean all

.PHONY:		all debug clean fclean re
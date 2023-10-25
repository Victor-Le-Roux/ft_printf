# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 01:46:19 by vle-roux          #+#    #+#              #
#    Updated: 2023/10/20 21:14:56 by vle-roux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RM = rm

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_striteri \

FILES_B = 	ft_lstnew \
	  		ft_lstadd_front \
	  		ft_lstsize \
	  		ft_lstdelone \
	  		ft_lstlast \
	  		ft_lstadd_back \
	  		ft_lstclear \
	  		ft_lstiter \
	  		ft_lstmap

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

.PHONY: test all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^
	
bonus: $(OBJS_B)
	$(AR) rcs $(NAME) $^

clean:
	$(RM) -f $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) -f $(NAME)

re: clean all

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

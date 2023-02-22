# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:11:43 by asarikha          #+#    #+#              #
#    Updated: 2023/02/22 11:08:53 by asarikha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c print_hex.c print_nbr.c print_utils.c print_unsigned.c print_ptr.c
OBJECTS = $(SRC:.c=.o)
INCLUDE = ft_printf.h
NAME_FT = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(SRC)
	make -C ./libft all && mv ./libft/libft.a ./$(NAME) 
	$(CC) -c $(CFLAGS) $(SRC) -I $(INCLUDE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

.PHONY: clean
clean:
	make -C ./libft clean
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)

.PHONY: re
re: fclean all
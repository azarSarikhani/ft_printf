# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asarikha <asarikha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:11:43 by asarikha          #+#    #+#              #
#    Updated: 2023/02/21 15:52:34 by asarikha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_tolower.c ft_toupper.c \
		 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_printf.c print_hex.c \
		print_nbr.c print_utils.c print_unsigned.c print_ptr.c
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c
OBJECTS = $(SRC:.c=.o)
OBJECTS_BONUS = $(SRC_BONUS:.c=.o)
INCLUDE = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC) -I $(INCLUDE)
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY : bonus

bonus:$(OBJECTS_BONUS)

$(OBJECTS_BONUS): $(SRC_BONUS)
	$(CC) -c $(CFLAGS) $(SRC_BONUS) -I $(INCLUDE)
	ar rcs $(NAME) $(OBJECTS_BONUS)
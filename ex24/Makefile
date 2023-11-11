# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 12:45:47 by beredzhe          #+#    #+#              #
#    Updated: 2023/11/11 21:48:17 by beredzhe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
						srcs/ft_strlen.c srcs/ft_swap.c


OBJ = $(SRC:.c=.o)

all : $(NAME)
	
$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all



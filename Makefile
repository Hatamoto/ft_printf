# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 20:09:48 by mburakow          #+#    #+#              #
#    Updated: 2023/11/13 18:38:35 by mburakow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I

LIBFT_PATH = ./libft

LIBFT = libft.a

SRC_DIR = srcs/

OBJ_DIR = objs/	

SOURCES = ft_printf.c

OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

INCLUDES = includes

all : $(NAME)

$(NAME) : $(OBJECTS)
	make -C $(LIBFT_PATH) all
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar -crs $(NAME) $(OBJECTS)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	ar -crs $(NAME) $@ 

clean : 
	rm -rf $(OBJ_DIR)
	make clean -C $(LIBFT_PATH)

fclean : clean 
	rm -f $(NAME)
	rm -f $(LIBFT)

re : fclean all

.PHONY : all clean fclean re

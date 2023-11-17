# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 20:09:48 by mburakow          #+#    #+#              #
#    Updated: 2023/11/17 14:36:46 by mburakow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -I
SRC_DIR			= 	srcs
INCLUDE			= 	includes
SRCS			= 	ft_printf.c			ft_print_addr.c		ft_print_char.c	\
					ft_print_string.c	ft_print_hex.c		ft_print_uint.c	\
					ft_print_int.c
OBJ_DIR			=	objs
OBJS			=	$(SRCS:%.c=$(OBJ_DIR)/%.o)
LIBFT_DIR		=	./libft
LIBFT			=	$(LIBFT_DIR)/libft.a

$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c
					$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all:				$(NAME)

bonus:				all

$(NAME):			$(LIBFT) $(OBJ_DIR) $(OBJS)
					cp	$(LIBFT) $(NAME)
					ar -crs $(NAME) $(OBJS)

$(LIBFT):
					make -C $(LIBFT_DIR) all

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					make -C $(LIBFT_DIR) clean
					rm -rf $(OBJ_DIR)

fclean:				clean
					make -C $(LIBFT_DIR) fclean
					rm -f $(NAME)
					rm -f $(LIBFT)

re:					fclean all

.PHONY:				all bonus clean fclean re libft

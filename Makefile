# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 17:21:35 by alejagom          #+#    #+#              #
#    Updated: 2025/03/31 20:16:57 by alejogogi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = src/push_swap.c src/parceo.c
OBJ = $(SRC:.c=.o)

LIB_DIR = libft
LIBFT =	$(LIB_DIR)/libft.a

FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

INCLUDE = include/push_swap.h
CC_FLAGS = -I./include
LIBFT_INCLUDE = libft
FT_PRINTF_INCLUDE = ft_printf

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(LIBFT) $(FT_PRINTF) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIB_DIR)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	$(AR) $(NAME) $(OBJ)
 
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -I$(LIBFT_INCLUDE) -I$(FT_PRINTF_INCLUDE) -I. -c $< -o $@ 
	
clean: 
	$(RM) $(OBJ)
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_DIR) fclean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all
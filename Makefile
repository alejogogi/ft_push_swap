# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 17:21:35 by alejagom          #+#    #+#              #
#    Updated: 2025/03/14 18:12:00 by alejagom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c 
OBJ = $(SRC:.c=.o)
LIB_DIR = ./libft
LIBFT =	$(LIB_DIR)/libft.a

INCLUDE = push_swap.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ)
 
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -I$(LIB_DIR) -c -o $@ $<
	
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:39:56 by sel-kham          #+#    #+#              #
#    Updated: 2021/12/14 08:32:42 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror

HEADER := ft_printf.h

NAME := ft_printf.a

OBJ_DIR := Object_Files/

SRC_FILES_M := ft_printf.c

OBJ_FILES_M := $(addprefix $(OBJ_DIR), $(SRC_FILES_M:.c=.o))

.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(OBJ_FILES_M) $(HEADER)
	ar -rcs $(NAME) $(OBJ_FILES_M)

$(OBJ_FILES_M):$(SRC_FILES_M)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
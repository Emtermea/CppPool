# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emtermea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/13 13:27:58 by emtermea          #+#    #+#              #
#    Updated: 2017/04/13 16:03:56 by emtermea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = clang++

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

SRC = whatever.cpp \

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $^

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $< -I$(HEADER)

clean:
	@rm -f $(OBJ)
	@echo "\033[4;32mDeleted\033[0;33m $(OBJ)\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[4;32mDeleted\033[0;33m $(NAME)\033[0m"

re: fclean all

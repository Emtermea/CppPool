# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emtermea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/03 18:39:16 by emtermea          #+#    #+#              #
#    Updated: 2017/04/03 18:39:19 by emtermea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp contact.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) -o $(NAME) $^

%.o: %.cpp
	g++ $(FLAGS) -o $@ -c $< -I .

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

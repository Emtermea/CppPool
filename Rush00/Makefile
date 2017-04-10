# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emtermea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/08 11:04:03 by emtermea          #+#    #+#              #
#    Updated: 2017/04/08 11:04:11 by emtermea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

HEADER = includes/

DIRSRC = srcs/

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AGameObjects.cpp	\
		main.cpp		\
		Player.cpp		\
		Vec2.cpp		\
		Enemies.cpp		\
		Weapon.cpp		\
		Rocket.cpp		\
		Scene.cpp		\
		Window.cpp


OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(FLAGS) -o $(NAME) $^ -lcurses

%.o: $(DIRSRC)%.cpp
	@g++ $(FLAGS) -o $@ -c $< -I$(HEADER)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

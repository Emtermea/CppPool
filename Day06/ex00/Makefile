NAME = Convert

CC = clang++

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp \

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

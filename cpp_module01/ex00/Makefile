NAME = BraiiiiiiinnnzzzZ

SRC	= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJ	= $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)
				
fclean:	clean
	rm -rf $(NAME)

re:	fclean all
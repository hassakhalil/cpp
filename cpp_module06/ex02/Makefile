NAME = real

SRC	= main.cpp Base.cpp A.cpp B.cpp C.cpp

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
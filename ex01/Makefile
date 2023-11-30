NAME = Bureaucrat

SRC = Bureaucrat.cpp main.cpp
HDF = Bureaucrat.hpp
OBJ = $(SRC:.cpp=.o )

%.o: %.cpp $(HDF)
	$(CXX) $(CFLAGS) -c $< -o $@

CXX = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
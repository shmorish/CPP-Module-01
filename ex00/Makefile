NAME = Zombie
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRC:%.cpp=%.o)
HEADERS = Zombie.hpp
RM = rm -f
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

format :
	clang-format -i $(SRC) $(HEADERS)

.PHONY : all clean fclean re format

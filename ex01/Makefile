C++ := c++ -std=c++98
RM := rm -rf
NAME := Zombie
SRCS := Zombie.cpp \
		zombieHorde.cpp \
		main.cpp 
SRC := $(addprefix $(SRC_DIR), $(SRCS))
OBJ := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	${C++} $^ -o ${NAME}

%.o: %.cpp
	${C++} -c $? -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHOMY: all clean fclean re 
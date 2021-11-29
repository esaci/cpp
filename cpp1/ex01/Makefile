NAME = Zombie

SRCS_DIR = ./
SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp

CXX = clang++
CXX_FLAGS = -Werror -Wextra -Wall -std=c++98

OBJ_DIR = objects/
OBJ = $(SRCS:%.cpp=%.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

DEP = $(OBJS:%.o=%.d)

$(NAME) : $(OBJS)
	$(CXX) $(CXX_FLAGS) $^ -o $@

-include $(DEP)

$(OBJ_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) -MMD -c $< -o $@

all : $(NAME)
clean :
	rm  -rf $(OBJ_DIR) $(DEP)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : clean fclean all re

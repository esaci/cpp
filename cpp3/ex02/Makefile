NAME = FragTrap

CXX = c++
CXX_FLAGS = -Werror -Wextra -Wall -std=c++98 -Wshadow -Wno-shadow

SRC_DIR = ./
SRCS =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	

OBJ_DIR = objects/
OBJ = $(SRCS:%.cpp=%.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
DEP = $(OBJS:%.o=%.d)
$(NAME) : $(OBJS)
	$(CXX) $(CXX_FLAGS) $^ -o $@

-include $(DEP)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) -MMD -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re


NAME = Fixed

CXX = c++
CXX_FLAGS = -Wextra -Werror -Wall -std=c++98

SRC_DIR = ./
SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp

OBJ_DIR = objects/
OBJ = $(SRCS:%.cpp=%.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
DEP = $(OBJ:%.o=%.d)
$(NAME) : $(OBJS)
	$(CXX) $(CXX_FLAGS) $^ -o $@

-include $(DEP)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) -MMD -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
NAME		=		megaphone

SRCS_DIR	=		./

SRCS		=		megaphone.cpp

CC			=		clang++

FLAGS		=		-Wall -Werror -Wextra -std=c++98

OBJS_DIR	=		objets/

OBJ			=		$(SRCS:.cpp=.o)

OBJS		=		$(addprefix $(OBJS_DIR), $(OBJ))

INCLUDES	=		

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf objets/

fclean: clean
		rm -rf $(NAME)

re:	fclean all

.PHONY : clean fclean all re
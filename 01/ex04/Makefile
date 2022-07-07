SRCS			= main.cpp \
replace.cpp \


HEADERS			= replace.hpp 


OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= replace

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

$(OBJ): 		$(OBJ_DIR)/%.o: %.cpp $(SRCS_H)
				@mkdir -p $(OBJ_DIR)
				@clang++ -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
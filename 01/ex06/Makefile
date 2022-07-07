SRCS			= main.cpp \
Harl.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= HarlFilter

all:			$(NAME)

$(NAME):		$(OBJS) Harl.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Harl.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
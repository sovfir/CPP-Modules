SRCS			= main.cpp \
Fixed.cpp \

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I.

NAME			= FixedPro

all:			$(NAME)

$(NAME):		$(OBJS) Fixed.hpp
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) -I Fixed.hpp

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
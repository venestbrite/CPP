SRCS	=	main.cpp \
			Bureaucrat.cpp

CXX		= clang++

CXXFLAGS = -Wall -Wextra -Werror

OBJS	= $(SRCS:.cpp=.o)

RM				= rm -f

NAME			= bureaucrat

all:			$(NAME)

$(NAME):		 $(OBJS)
					$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				clean all

.PHONY:			all clean fclean re
NAME	=	in_row

			
SRCS	=	Bureaucrat.cpp	\
			Form.cpp		\
			main.cpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDE =	Bureaucrat.hpp	\
			Form.hpp

OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I include -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
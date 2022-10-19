NAME	=	iwill_be_bureaucrat

			
SRCS	=	Bureaucrat.cpp	\
			main.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDE =	Bureaucrat.hpp

OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(INCLUDE) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
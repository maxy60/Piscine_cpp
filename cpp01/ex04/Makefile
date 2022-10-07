NAME	=	Sed_is_for_losers
			
SRCS	=	main.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

REP		=	*.replace

%.o:		%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)
		rm -f $(REP)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
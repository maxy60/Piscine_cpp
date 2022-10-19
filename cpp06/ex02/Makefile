NAME	=	Identify_the_real_type

			
SRCS	=	main.cpp			\
			Base.cpp			\
			A.cpp				\
			B.cpp				\
			C.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDE =	Base.hpp	\
			A.hpp		\
			B.hpp		\
			C.hpp

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
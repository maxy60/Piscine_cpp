NAME	=	PhoneBook

SRCS	=	main.cpp		\
			PhoneBook.cpp	\
			Contact.cpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDE =	PhoneBook.hpp	\
			Contact.hpp

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
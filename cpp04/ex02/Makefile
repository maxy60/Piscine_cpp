NAME	=	Polymorphisme
			
SRCS	=	main.cpp		\
			Animal.cpp		\
			Dog.cpp			\
			Cat.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Brain.cpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDES =	Animal.hpp		\
			Dog.hpp			\
			Cat.hpp			\
			WrongAnimal.hpp	\
			WrongCat.hpp	\
			Brain.hpp

OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I includes -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
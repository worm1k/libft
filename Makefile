NAME = a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c

OBJ = $(SRC:.c=.o)


all: $(NAME)
	echo "dick"
$(NAME): 
	gcc -o a $(SRC)
clean:
	rm -rf *.o

fclean: clean
	rm -rf a

re: fclean all
	echo "dick"

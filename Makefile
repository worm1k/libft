NAME = a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_*.c

OBJ = $(SRC:.c=.o)


all: $(NAME)
	@echo ""
$(NAME): 
	gcc -c $(SRC)
	ar rc libft.a $(OBJ)
clean:
	rm -rf *.o

fclean: clean
	rm -rf a
	rm -rf libft.a

re: fclean all
	@echo "Done"

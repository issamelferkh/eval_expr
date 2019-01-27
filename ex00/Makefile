NAME = eval_expr

SRC = src/*.c

OBJ = *.o

DEPS = include/ft_fonction.h 

FLAGS = -Wall -Wextra -Werror

CC = gcc $(FLAGS)

all:
	$(CC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all


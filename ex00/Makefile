NAME = eval_expr

SRCS = src/

NAME_OBJ =

INCLUDES = include/

_DEPS = ft_fonction.h

DEPS = $(patsubst %, $(INCLUDES)%, $(_DEPS))

FLAGS = -Wall -Wextra -Werror

_OBJ = ft_fonction.o

OBJ = $(patsubst %, $(NAME_OBJ)%, $(_OBJ))

CC = gcc $(FLAGS)

all: $(_OBJ)
	$(CC) -o $(NAME) $(OBJ)

%.o: $(SRCS)%.c $(DEPS)
	$(CC) -o $(NAME_OBJ)$@ -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
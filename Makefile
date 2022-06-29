##
## EPITECH PROJECT, 2022
## B-AIA-200-LYN-2-1-n4s-guilhem.vinet
## File description:
## Makefile
##

NAME = ai

SRC = $(wildcard src/*.c) \
		$(wildcard lib/*.c)

OBJ = $(SRC:.c=.o)

FLAGS = -L./ -g3

LIB = -lmy

all: $(NAME)

$(NAME): $(OBJ)
		ar rc libmy.a $(OBJ)
		gcc -o $(NAME) $(FLAGS) $(OBJ) $(LIB)
clean:
	rm -f libmy.a $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

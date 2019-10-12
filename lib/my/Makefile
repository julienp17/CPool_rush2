##
## EPITECH PROJECT, 2019
## C Pool Rush 2
## File description:
## Libmy Makefile
##

CC = gcc

SRC = my_putchar.c \
	    my_put_nbr.c \
	    my_is_alpha_upper.c \
	    my_is_alpha_lower.c \
	    my_is_alpha.c \
	    my_strlen.c \
	    my_get_n_length.c \
	    my_strcmp.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

HEADERS = my.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(HEADERS) ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../include/$(HEADERS)

re: fclean all

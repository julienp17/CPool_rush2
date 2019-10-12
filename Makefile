##
## EPITECH PROJECT, 2019
## C Pool Rush 2
## File description:
## Project root Makefile
##

CC = gcc

SRC = main.c \
	    str_occurence.c \
	    get_percentage.c \
	    my_print.c

CFLAGS = -W -Wall -Wextra -Werror -I./include

LDFLAGS = -L./lib -lmy

NAME = rush2

all:
	make -C ./lib/my all
	$(CC) -c $(SRC) $(CFLAGS)
	$(CC) -o $(NAME) $(SRC:.c=.o) $(CFLAGS) $(LDFLAGS)

tests_run:
	make -C ./tests all

clean:
	rm -f *.o
	make -C ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -C ./lib/my fclean

re: fclean all

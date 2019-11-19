##
## EPITECH PROJECT, 2019
## C Pool Rush 2
## File description:
## Makefile for unit tests
##

CC = gcc

SRC = ../error_handling.c \
	    ../str_occurence.c \
	    ../my_print.c \
	    ../percentage_file.c \
	    ../struct_letters.c \
	    ../language.c

SRC_UT = ./test_print_occurence.c \
	       ./test_get_occurence.c \
	       ./test_str_to_lower.c

CFLAGS = -W -Wall -Wextra -Werror --coverage -I../include/

LDFLAGS = -lcriterion --coverage -L../lib -lmy

NAME = ../unit_tests

all: $(OBJ) $(OBJ_UT)
	$(CC) -o $(NAME) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)
	$(NAME)

OBJ: $(SRC) $(SRC_UT)
	$(CC) -c $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ_UT)

fclean:
	rm -f $(NAME)

re: fclean all

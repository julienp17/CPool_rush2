##
## EPITECH PROJECT, 2019
## C Pool Rush 2
## File description:
## Project root Makefile
##

CC 		= 	gcc

SRC		=	$(addprefix $(SRC_D), $(SRC_F))
SRC_D	=	./src/
SRC_F 	= 	main.c \
			error_handling.c \
			str_occurence.c \
			my_print.c \
			struct_letters.c \
			percentage_file.c \
			language.c

OBJ 	=	$(SRC:.c=.o)

CFLAGS 	= 	-W -Wall -Wextra -Werror $(INC) $(LDFLAGS)

INC		=	-I./include

LDFLAGS = 	-L./lib -lmy

NAME 	= 	rush2

all: $(NAME)

$(NAME): makelib $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

makelib:
	make -C ./lib/my all

tests_run: clean all
	make -C ./tests all

clean:
	rm -f $(OBJ)
	make -C ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -C ./lib/my fclean

re: fclean all

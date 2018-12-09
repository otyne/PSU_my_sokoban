##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)directions.c	\
		$(SRC_DIR)sokoban.c	\
		$(SRC_DIR)tools.c	\
		$(SRC_DIR)colors.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Llib/my -lmy -Iinclude -lncurses

NAME	=	my_sokoban

all:	$(OBJ)
	@make -sC ./lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make -sC ./lib/my clean
	@make -sC ./tests clean
	@rm -f $(OBJ)

fclean:	clean
	@make -sC ./lib/my fclean
	@make -sC ./tests fclean
	@rm -f $(NAME)

tests_run:
	@make -sC ./lib/my
	@make -sC ./tests
	./tests/units-tests

re:	fclean all

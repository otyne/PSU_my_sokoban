##
## EPITECH project, 2018
## my_world
## File description
## making
##

SRC_DIR		=	../src/

SRC		=	

SRC_UT	=	

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

LIB	=	 -L ../lib/my -lmy

NAME	=	units-tests

CFLAGS	=	--coverage -I../include 

LDFLAGS	=	-lcriterion -lgcov -lc_graph_prog -lm -lncurses

all:		$(OBJ)
		cc -o ../$(NAME) $(OBJ) $(INC) $(LIB) $(LDFLAGS)
clean:
		rm -f $(OBJ)
		rm -f $(SRC:.c=.gcno)
		rm -f $(SRC:.c=.gcda)
		rm -f $(SRC_UT:.c=.gcda)
		rm -f $(SRC_UT:.c=.gcno)

fclean: 	clean
		rm -f ../$(NAME)

re: 		fclean all

.PHONY: 	make re clean fclean all

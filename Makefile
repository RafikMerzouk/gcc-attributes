##
## EPITECH PROJECT, 2021
## Attributes
## File description:
## Makefile
##

SRC = setattribute.c

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -Werror -Wfatal-errors

NAME = attributes

all	:	$(NAME)
$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re:	fclean all
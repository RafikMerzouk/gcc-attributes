##
## EPITECH PROJECT, 2021
## Attributes
## File description:
## Makefile
##

SRC = getattribute.c

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -Werror

NAME = attributes

all	:	$(NAME)
$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re:	fclean all
##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/main.c	\
		srcs/ai.c

NAME	=	ai

all:	$(NAME)

$(NAME):
	make re -C lib/my
	gcc $(SRC) -L. -lmy -o $(NAME)

clean:
	rm -rf *~ \#*\# .\#*

fclean:
	rm -f $(NAME) libmy.a

re:	fclean all clean

##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

NAME = setting_up
DEBUG = -g
CFLAGS += -g -Wall -Wextra -W -Iinclude -Ilib/include

SRC =	./src/main.c \

OBJ  	=	 $(SRC:.c=.o)


all: 	$(NAME)
		$(MAKE) clean

$(NAME):	$(OBJ)
		$(MAKE) -C lib all
		gcc $(CFLAGS) -o $(NAME) $(OBJ) libmy.a

clean || clear:
		$(MAKE) -C lib clean
		rm -f $(OBJ)

fclean:
		rm -f $(NAME) debug $(OBJ) libmy.a

re:
		$(MAKE) fclean
		$(MAKE) all
		$(MAKE) clean

debug: 	$(DEBUG)

$(DEBUG):	$(OBJ)
		$(MAKE) -C lib all
		gcc -g $(CFLAGS) -o debug $(OBJ) libmy.a

redebug:
		$(MAKE) fclean
		$(MAKE) debug

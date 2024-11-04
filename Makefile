##
## EPITECH PROJECT, 2024
## Makefile Root
## File description:
## MakeFile dans le fichier root
##

pathdir=./src/lib

NAME = libmy.a

LIB = $(pathdir)/my_compute_power_rec.c\
	$(pathdir)/my_find_prime_sup.c\
	$(pathdir)/my_getnbr.c\
	$(pathdir)/my_is_prime.c\
	$(pathdir)/my_isneg.c\
	$(pathdir)/my_put_nbr.c\
	$(pathdir)/my_putchar.c\
	$(pathdir)/my_putstr.c\
	$(pathdir)/my_revstr.c\
	$(pathdir)/my_showmem.c\
	$(pathdir)/my_sort_int_array.c\
	$(pathdir)/my_str_isalpha.c\
	$(pathdir)/my_str_islower.c\
	$(pathdir)/my_str_isnum.c\
	$(pathdir)/my_str_isprintable.c\
	$(pathdir)/my_str_isupper.c\
	$(pathdir)/my_strcapitalize.c\
	$(pathdir)/my_strcat.c\
	$(pathdir)/my_strcmp.c\
	$(pathdir)/my_strcpy.c\
	$(pathdir)/my_strlen.c\
	$(pathdir)/my_strncat.c\
	$(pathdir)/my_strncpy.c\
	$(pathdir)/my_strstr.c\
	$(pathdir)/my_strupcase.c\
	$(pathdir)/my_swap.c\

OBJ  	=	 $(SRC:.c=.o)

TEST =  $(LIB:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJ) $(TEST)
		ar rcs $(NAME) $(OBJ)  $(TEST)

clean:
		rm -f $(OBJ) $(TEST)

fclean:
		rm -f $(NAME) $(TEST) $(OBJ)

re:
		$(MAKE) fclean
		$(MAKE) all
debug:
		$(MAKE) clean
		gcc -g main.c -Iinclude libmy.a

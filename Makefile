## EPITECH PROJECT, 2020
## makefile d10
## File description:
## makefile for libmy
##

NAME	=	libmy.a

SRC		=	lib/my_strupcase.c \
		lib/my_strstr.c \
		lib/my_strncpy.c \
		lib/my_strlowcase.c \
		lib/my_strlen.c \
		lib/my_str_isupper.c \
		lib/my_str_isprintable.c \
		lib/my_str_isnum.c \
		lib/my_str_islower.c \
		lib/my_str_isalpha.c \
		lib/my_strcmp.c \
		lib/my_strcapitalize.c \
		lib/my_sort_int_array.c \
		lib/my_putstr.c \
		lib/my_putnbr.c \
		lib/my_putchar.c \
		lib/my_isprime.c \
		lib/my_isneg.c \
		lib/my_find_prime_sup.c \
		lib/my_putnbr_base.c \
		lib/my_uputnbr_base.c \
		lib/my_swap.c \
		src/move_rect.c \
		src/framebuffer_create.c \
		src/framebuffer_destroy.c \
		src/my_creatwin.c \
		src/my_draw_square.c \
		src/my_put_pixel.c \
		src/manage_event.c \
		src/timing_org.c \

SRCTST	=	../../tests/test_project.c \
			../../tests/test_project_is.c \
			../../tests/test_project_str.c \
			../../tests/test_project_nbr.c

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc -Wall -Wextra -o my_hunter my_hunter.c -I . -L . -lmy -lcsfml-graphics -lcsfml-system -lcsfml-window

clean:	
	rm -f $(OBJ)
	rm -f lib/$(OBJ)
	rm -f *.c~
	rm -f lib/*.c~
	rm -f *.gcno
	rm -f *.gcda

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME) clean

test_run:	test_run
		make test_fclean
		gcc -o unit_tests $(SRC) $(SRCTST) --coverage -lcriterion
		./unit_tests
		make test_fclean

test_clean:
		rm -f *.gcno
		rm -f *.gcda

test_fclean:	test_clean
		rm -f unit_tests

all:	$(NAME)  clean

##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## makefile
##

SRC		=		my_putstr.c 			\
				my_putchar.c

OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

all		: 		$(NAME)

$(NAME)	:		$(OBJ)
				@ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
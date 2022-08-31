NAME = Libftprintf.a

CC = clang

CFLAG = -Wall -Werror -Wextra

SRC = ft_printf_utils.c \
	ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_itoa.c \
	ft_strlen.c \


OBJ = $(SRC:.c=.o) # .c = .-   ca veut dire que on remplce les .c par des .o de tous ce que contient la variable SRC



all : $(NAME)

%.o :%.c
	$(CC) -c $(CFLAGS) $^

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

clean :
	rm -rf *.o
	rm -rf libft/*.o



fclean : clean
	rm -rf *.a


# <cible> : <dependance>
#	<commande>


## Variable special : $@ = nom de la cible, $< nom de la 1ere dependmce, $^liste des dependance, ? liste de dependance plus recente que la cible, &* nom du fichier sans son extension

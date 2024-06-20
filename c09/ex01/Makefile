FILES	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OTPT	= ${FILES:.c=.o}
FLAGS	= -Wall -Wextra -Werror

.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I includes

libft.a: ${OTPT}
		ar rc libft.a ${OTPT}
		ranlib libft.a

all: libft.a

clean:
		rm -f ${OTPT}

fclean: clean
		rm -f libft.a

re: fclean all
FILES	= ft_atoi.c ft_putnbr.c ft_strcmp.c op.c main.c
OTPT	= ${FILES:.c=.o}
FLAGS	= -Wall -Wextra -Werror

all: do-op

do-op:
	gcc ${FLAGS} -o do-op ${FILES}

clean:
		rm -f *.o

fclean: clean
		rm -f do-op

re: fclean all
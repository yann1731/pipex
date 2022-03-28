SCRS =		checkargs.c checkoutput.c execute.c main.c strconcat.c strsplit.c substr.c run1.c run2.c \
			ft_strlen.c ft_strjoin.c findpath.c ft_strstr.c


OBJS =		${SCRS:.c=.o}

CC =		gcc

CLAGS =		-Wall -Werror -Wextra -g

RM =		rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${OBJS}
			${CC} ${CFLAGS} ${OBJS}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} a.out
re:			fclean all
.PHONY:		all clean fclean re
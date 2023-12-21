SRCS	=	ft_printf.c	

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o:%.c
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: ${NAME}, all. clean, fclean, re

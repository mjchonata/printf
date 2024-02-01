# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchonata <mchonata@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 19:30:30 by mchonata          #+#    #+#              #
#    Updated: 2024/02/01 18:20:23 by mchonata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c	\
			ft_strlen.c	\
			ft_putstr.c	\
			ft_putnbr.c	\
			ft_uints.c	\
			ft_hex.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g

RM		= rm -f

%.o:%.c
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: ${NAME}, all. clean, fclean, re

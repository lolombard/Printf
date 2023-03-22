# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llombard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:22:42 by llombard          #+#    #+#              #
#    Updated: 2022/11/02 11:34:25 by llombard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC :=	ft_printf.c \
	ft_putchar.c \
	ft_string.c \
	ft_unsi.c \
	ft_putnbr.c \
	ft_pointer.c \
	ft_nbrexa.c
		
CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRC:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) -c $(CFLAGS) -I. $< -o $@

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

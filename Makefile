# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 20:07:45 by hchadili          #+#    #+#              #
#    Updated: 2023/11/18 01:07:25 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_putnbr.c ft_putchar.c ft_putstr.c ft_printf.c ft_hexa.c

OBJS = $(SRC:.c=.o)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o : %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 13:17:55 by kquispe           #+#    #+#              #
#    Updated: 2023/12/27 16:18:48 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
PRINTFH = ft_printf.h

CCFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_lett.c ft_itoa.c main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTFH)
	ar rcs $(NAME) $(OBJ)

all2: $(OBJ) $(PRINTFH)
	gcc $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re all2
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 13:17:55 by kquispe           #+#    #+#              #
#    Updated: 2024/01/31 15:16:52 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
PRINTFH = ft_printf.h

CCFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_lett.c ft_itoa.c ft_uns_num.c main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTFH)
	ar rcs $(NAME) $(OBJ)

all2: $(OBJ) $(PRINTFH)
	gcc $(CCFLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re all2
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 16:53:25 by ademirci          #+#    #+#              #
#    Updated: 2022/03/21 16:53:27 by ademirci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

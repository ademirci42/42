# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 14:26:55 by ademirci          #+#    #+#              #
#    Updated: 2022/02/23 16:42:24 by ademirci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) $(OPTION) $(BONUS)
	ar rc $(NAME) *.o

clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all

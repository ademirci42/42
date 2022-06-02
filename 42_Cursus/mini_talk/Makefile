# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademirci <ademirci@student.42kocaeli.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 15:29:39 by ademirci          #+#    #+#              #
#    Updated: 2022/04/23 17:10:11 by ademirci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_SERVER = server.c minitalk_utils_I.c minitalk_utils_II.c
SRC_CLIENT = client.c minitalk_utils_I.c minitalk_utils_II.c

NAME_SERVER = server
NAME_CLIENT = client

OBJ_SERVER = server.o minitalk_utils_I.o minitalk_utils_II.o
OBJ_CLIENT = client.o minitalk_utils_I.o minitalk_utils_II.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_SERVER): $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(SRC_SERVER) -o server

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(SRC_CLIENT) -o client

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 11:37:21 by ademirci          #+#    #+#              #
#    Updated: 2022/06/09 11:37:24 by ademirci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap
OBJ = ft_data_write.c ft_hard_swap.c ft_mission.c ft_pivot.c ft_validation_I.c ft_validation_II.c ft_validation_utils.c main.c movement_I.c movement_II.c movement_utils.c push_swap.h push_swap_utils.c swap.c swap_utils.c ./ft_printf/libftprintf.a ./libft/libft.a

all: $(NAME)
$(NAME):
	@$(MAKE) -C libft/ re
	@$(MAKE) -C ft_printf/ re
	$(CC) $(FLAGS) $(OBJ)
	mv ./a.out ./push_swap

clean:
	@$(MAKE) -C libft/ clean
	@$(MAKE) -C ft_printf/ clean

fclean: fclean
	rm -f $(NAME)
	@$(MAKE) -C libft/ fclean
	@$(MAKE) -C ft_printf/ fclean

re: fclean all

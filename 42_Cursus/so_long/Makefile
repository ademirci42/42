CC		= gcc
MFLAGS	= -framework OpenGL -framework AppKit
FLAGS	= -Wall -Wextra -Werror
BONUS	= bonus/so_long_bonus.c bonus/so_long_utils_bonus.c bonus/ft_arg_control_bonus.c \
			bonus/ft_arg_control_utils_bonus.c bonus/ft_draw_image_bonus.c \
			bonus/ft_key_hook_bonus.c bonus/player_moves_bonus.c \
			bonus/player_moves_utils_bonus.c bonus/ft_game_loop_bonus.c \
			bonus/ft_init_bonus.c bonus/ft_game_loop_utils_bonus.c\
			bonus/ft_init_utils_I_bonus.c bonus/ft_init_utils_II_bonus.c \
			bonus/ft_sk_move_bonus.c bonus/ft_exit_check_bonus.c \
			bonus/ft_sk_move_utils_bonus.c
SRC		= src/so_long.c src/so_long_utils.c src/ft_arg_control.c \
			src/ft_arg_control_utils.c src/ft_draw_image.c src/ft_key_hook.c \
			src/player_moves.c src/player_moves_utils.c

NAME	= so_long
BNAME	= so_long_bonus
OBJ		= $(SRC:*.c=*.o)
BOBJ	= $(BONUS:*.c=*.o)
MLIBX	= include/minilibx/libmlx.a
LIBFT	= include/libft/libft.a
PRINTF	= include/ft_printf/libftprintf.a
GNL		= include/get_next_line/*.c

all: inc $(NAME)

$(NAME): $(MLIBX) $(OBJ) $(LIBFT) $(PRINTF) $(GNL)
	$(CC) $(FLAGS) $(MFLAGS) $(OBJ) -o $(NAME) $(MLIBX) $(LIBFT) $(PRINTF) $(GNL)

bonus: inc $(BNAME)

$(BNAME): $(MLIBX) $(BOBJ) $(LIBFT) $(PRINTF) $(GNL)
	$(CC) $(FLAGS) $(MFLAGS) $(BOBJ) -o $(BNAME) $(MLIBX) $(LIBFT) $(PRINTF) $(GNL)

inc:
	@make clean -C include/minilibx
	@make -C include/minilibx

	@make fclean -C include/libft
	@make -C include/libft
	
	@make fclean -C include/ft_printf
	@make -C include/ft_printf
	

clean:
	rm -rf src/*.o
	rm -rf bonus/*.o

fclean: clean
	rm -rf $(NAME)
	rm -rf $(BNAME)

	@make clean -C include/minilibx
	@make fclean -C include/libft
	@make fclean -C include/ft_printf
re: fclean all

reb: fclean bonus

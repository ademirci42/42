/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:29:57 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 04:31:34 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//library
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include "minilibx/mlx.h"
# include <stdio.h>
# include <stdlib.h>

//warnings
# define W_ARGC "Error\nYanlış Argüman Sayısı!\n"
# define W_FTYP "Error\nDesteklenmeyen dosya biçimi!\n"
# define W_UDTFD "Error\nHaritada tanımlanamayan karakter!\n"
# define W_COLC "Error\nHaritanın bütün satırları eşit uzunlukta olmalıdır!\n"
# define E_MAP "Error\nHarita açılamadı!\n"
# define E_MLC "Error\nMalloc hatası!\n"
# define E_WALL "Error\nHaritanın etrafı duvarlardan oluşmalıdır!\n"
# define E_PLYR "Error\nHaritada başlangıç konumu bulunamadı!\n"
# define E_EXIT "Error\nHaritada çıkış konumu bulunamadı!!\n"
# define E_CLCT "Error\nHaritada en az bir toplanabilir olmalıdır!\n"

//texture
# define T_WIDTH 64
# define T_HEIGHT 64

//key_code
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53

//move
# define UP 1
# define LEFT 2
# define DOWN 3
# define RIGHT 4

typedef struct s_init
{
	void	*init;
	void	*new_window;
	void	*player;
	int		player_column;
	int		player_line;
	int		player_index;
	int		total_c_item;
	int		count_c_item;
	void	*exit;
	void	*wall;
	void	*empty_area;
	void	*collect_item;
	char	*map;
	int		map_line_c;
	int		map_column_c;
	int		image_w_h;
}			t_init;

//so_long_utils.c

void		ft_init(t_init *init);
void		ft_error(t_init *init, char *msg);

int			ft_strlen_nl(char *str);

//ft_arg_control_utils.c

void		ft_item_control(t_init *init);
void		ft_column_control(t_init *init);
void		ft_wall_control(t_init *init);
void		ft_character_control(t_init *init);

//ft_arg_control.c

void		ft_read_map(char *arg, t_init *init);
void		ft_ber_control(char *arg, t_init *init);
void		ft_map_control(char *arg, t_init *init);

//ft_draw_image.c

void		ft_put_image(t_init *init, void *type, int c, int l);
void		ft_put_image_pl(t_init *init, void *type, int c, int l);
void		ft_draw_image(t_init *init);

//ft_key_hook.c

void		ft_c_item_count_finder(t_init *init);
void		ft_player_move(t_init *init, int move);
int			ft_key_hook(int key, t_init *init);

//player_moves.c
void		ft_player_up(t_init *init);
void		ft_player_down(t_init *init);
void		ft_player_left(t_init *init);
void		ft_player_right(t_init *init);

//player_moves_utils.c
void		ft_player_index(t_init *init);
int			ft_wall_check(t_init *init, int type);
int			ft_coin_check(t_init *init, int type);
int			ft_exit_check(t_init *init, int type);

int			exit_hook(t_init *init);

#endif

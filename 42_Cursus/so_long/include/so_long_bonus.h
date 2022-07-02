/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:32:25 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 04:32:26 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
# define F_SUCC "\rOyun Bitti Tebrikler!\n"
# define F_GMOV "\rOyun Bitti Kazanamadın!\n"

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

typedef struct s_sk
{
	void	*s_front;
	void	*s_back;
	void	*s_left;
	void	*s_right;
	void	*sk_anim_f[6];
	void	*sk_anim_b[6];
	void	*sk_anim_l[6];
	void	*sk_anim_r[6];
}			t_sk;

typedef struct s_pl
{
	void	*p_front;
	void	*p_back;
	void	*p_left;
	void	*p_right;
	void	*p_anim_f[6];
	void	*p_anim_b[6];
	void	*p_anim_l[6];
	void	*p_anim_r[6];
}			t_pl;

typedef struct s_env
{
	void	*exit;
	void	*wall;
	void	*empty_area;
	void	*collect_item;
	void	*ci_anim[6];
}			t_env;

typedef struct s_init
{
	void	*init;
	void	*new_window;
	t_pl	pl;
	t_sk	sk;
	t_env	env;
	int		player_column;
	int		player_line;
	int		player_index;
	int		player_status;
	int		sk_mv;
	int		sk_status;
	int		total_c_item;
	int		count_c_item;
	int		ci_index;
	char	*map;
	int		map_line_c;
	int		map_column_c;
	int		image_w_h;
}			t_init;

//so_long_utils.c

void		ft_error(t_init *init, char *msg);

int			ft_strlen_nl(char *str);

//ft_init.c

void		ft_init(t_init *init);
void		*ft_xpm(t_init *init, char *src);

//ft_init_utils_I.c

void		ft_pl_front_init(t_init *init);
void		ft_pl_back_init(t_init *init);
void		ft_pl_left_init(t_init *init);
void		ft_pl_right_init(t_init *init);

//ft_init_utils_II.c

void		ft_sk_front_init(t_init *init);
void		ft_sk_back_init(t_init *init);
void		ft_sk_left_init(t_init *init);
void		ft_sk_right_init(t_init *init);

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
void		ft_null_index(t_init *init, int index);
void		ft_swap_index(t_init *init, int indx1, int indx2, int type);
void		ft_player_up(t_init *init);
void		ft_player_down(t_init *init);
void		ft_player_left(t_init *init);
void		ft_player_right(t_init *init);

//player_moves_utils.c
void		ft_player_index(t_init *init);

int			ft_wall_check(t_init *init, int type);
int			ft_sk_check(t_init *init, int type);
int			ft_coin_check(t_init *init, int type);
int			ft_exit_check(t_init *init, int type);

//ft_game_loop_utils.c
void		ft_pl_anim(t_init *init, int i, int c);
void		ft_sk_anim(t_init *init, int i, int c);

//ft_game_loop.c
int			ft_line(t_init *init, int index);
int			ft_column(t_init *init, int index);
int			ft_game_loop(t_init *init);

//so_long.c
int			exit_hook(t_init *init);

//ft_sk_move.c
void		ft_sk_move(t_init *init);

//ft_exit_check.c
int			ft_exit_deactive(t_init *init, int type);
int			ft_exit_check(t_init *init, int type);

void		ft_exit_active(t_init *init, int type);
//ft_sk_move_utils.c
int			ft_sk_type_check(t_init *init, int index, int chobj, int type);
int			ft_all_check(t_init *init, int index, int type);

void		ft_sk_left_move(t_init *init, int index);
void		ft_sk_right_move(t_init *init, int index);

#endif

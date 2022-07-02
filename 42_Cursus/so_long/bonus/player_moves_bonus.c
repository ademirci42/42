/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:40:00 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:42:20 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

//bir dosyada çok fazla fonksiyon

void	ft_swap_index(t_init *init, int indx1, int indx2, int type)
{
	int	tmp;

	tmp = init->map[indx1];
	init->map[indx1] = init->map[indx2];
	init->map[indx2] = tmp;
	if (type == 'P')
		init->player_index = indx1;
}

void	ft_player_up(t_init *init)
{
	if (ft_coin_check(init, UP))
	{
		init->count_c_item += 1;
		init->map[init->player_index - (init->map_column_c + 1)] = '0';
	}
	if (ft_sk_check(init, UP))
		ft_error(init, F_GMOV);
	if (ft_wall_check(init, UP) && ft_exit_check(init, UP))
	{
		ft_put_image(init, init->env.empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->pl.p_back, init->player_column,
			init->player_line - 1);
		ft_swap_index(init, init->player_index - (init->map_column_c + 1),
			init->player_index, 'P');
	}
	init->player_status = UP;
}

void	ft_player_down(t_init *init)
{
	if (ft_coin_check(init, DOWN))
	{
		init->count_c_item += 1;
		init->map[init->player_index + (init->map_column_c + 1)] = '0';
	}
	if (ft_sk_check(init, DOWN))
		ft_error(init, F_GMOV);
	if (ft_wall_check(init, DOWN) && ft_exit_check(init, DOWN))
	{
		ft_put_image(init, init->env.empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->pl.p_front, init->player_column,
			init->player_line + 1);
		ft_swap_index(init, init->player_index + (init->map_column_c + 1),
			init->player_index, 'P');
	}
	init->player_status = DOWN;
}

void	ft_player_left(t_init *init)
{
	if (ft_coin_check(init, LEFT))
	{
		init->count_c_item += 1;
		init->map[init->player_index - 1] = '0';
	}
	if (ft_sk_check(init, LEFT))
		ft_error(init, F_GMOV);
	if (ft_wall_check(init, LEFT) && ft_exit_check(init, LEFT))
	{
		ft_put_image(init, init->env.empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->pl.p_left, init->player_column - 1,
			init->player_line);
		ft_swap_index(init, init->player_index - 1, init->player_index, 'P');
	}
	init->player_status = LEFT;
}

void	ft_player_right(t_init *init)
{
	if (ft_coin_check(init, RIGHT))
	{
		init->count_c_item += 1;
		init->map[init->player_index + 1] = '0';
	}
	if (ft_sk_check(init, RIGHT))
		ft_error(init, F_GMOV);
	if (ft_wall_check(init, RIGHT) && ft_exit_check(init, RIGHT))
	{
		ft_put_image(init, init->env.empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->pl.p_right, init->player_column + 1,
			init->player_line);
		ft_swap_index(init, init->player_index + 1, init->player_index, 'P');
	}
	init->player_status = RIGHT;
}

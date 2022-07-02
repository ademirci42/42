/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:47:31 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 02:50:14 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_swap_index(t_init *init, int indx1, int indx2)
{
	int	tmp;

	tmp = init->map[indx1];
	init->map[indx1] = init->map[indx2];
	init->map[indx2] = tmp;
	init->player_index = indx1;
}

void	ft_player_up(t_init *init)
{
	if (ft_coin_check(init, UP))
	{
		init->count_c_item += 1;
		init->map[init->player_index - (init->map_column_c + 1)] = '0';
	}
	if (ft_wall_check(init, UP) && ft_exit_check(init, UP))
	{
		ft_put_image(init, init->empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->player, init->player_column,
			init->player_line - 1);
		ft_swap_index(init, init->player_index - (init->map_column_c + 1),
			init->player_index);
	}
}

void	ft_player_down(t_init *init)
{
	if (ft_coin_check(init, DOWN))
	{
		init->count_c_item += 1;
		init->map[init->player_index + (init->map_column_c + 1)] = '0';
	}
	if (ft_wall_check(init, DOWN) && ft_exit_check(init, DOWN))
	{
		ft_put_image(init, init->empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->player, init->player_column,
			init->player_line + 1);
		ft_swap_index(init, init->player_index + (init->map_column_c + 1),
			init->player_index);
	}
}

void	ft_player_left(t_init *init)
{
	if (ft_coin_check(init, LEFT))
	{
		init->count_c_item += 1;
		init->map[init->player_index - 1] = '0';
	}
	if (ft_wall_check(init, LEFT) && ft_exit_check(init, LEFT))
	{
		ft_put_image(init, init->empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->player, init->player_column - 1,
			init->player_line);
		ft_swap_index(init, init->player_index - 1, init->player_index);
	}
}

void	ft_player_right(t_init *init)
{
	if (ft_coin_check(init, RIGHT))
	{
		init->count_c_item += 1;
		init->map[init->player_index + 1] = '0';
	}
	if (ft_wall_check(init, RIGHT) && ft_exit_check(init, RIGHT))
	{
		ft_put_image(init, init->empty_area, init->player_column,
			init->player_line);
		ft_put_image_pl(init, init->player, init->player_column + 1,
			init->player_line);
		ft_swap_index(init, init->player_index + 1, init->player_index);
	}
}

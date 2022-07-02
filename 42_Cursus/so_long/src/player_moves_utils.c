/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:50:32 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 02:51:42 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_exit_deactive(t_init *init, int type)
{
	if (init->map[init->player_index - (init->map_column_c + 1)] == 'E'
		&& type == UP)
		return (1);
	if (init->map[init->player_index + (init->map_column_c + 1)] == 'E'
		&& type == DOWN)
		return (1);
	if (init->map[init->player_index - 1] == 'E' && type == LEFT)
		return (1);
	if (init->map[init->player_index + 1] == 'E' && type == RIGHT)
		return (1);
	return (0);
}

void	ft_exit_active(t_init *init, int type)
{
	if (init->map[init->player_index - (init->map_column_c + 1)] == 'E'
		&& type == UP)
		ft_error(init, "\rOyun Bitti Tebrikler!\n");
	if (init->map[init->player_index + (init->map_column_c + 1)] == 'E'
		&& type == DOWN)
		ft_error(init, "\rOyun Bitti Tebrikler!\n");
	if (init->map[init->player_index - 1] == 'E' && type == LEFT)
		ft_error(init, "\rOyun Bitti Tebrikler!\n");
	if (init->map[init->player_index + 1] == 'E' && type == RIGHT)
		ft_error(init, "\rOyun Bitti Tebrikler!\n");
}

int	ft_exit_check(t_init *init, int type)
{
	if (init->total_c_item > init->count_c_item && ft_exit_deactive(init, type))
		return (0);
	if (init->total_c_item == init->count_c_item)
		ft_exit_active(init, type);
	return (1);
}

int	ft_coin_check(t_init *init, int type)
{
	if (init->map[init->player_index - (init->map_column_c + 1)] == 'C'
		&& type == UP)
		return (1);
	if (init->map[init->player_index + (init->map_column_c + 1)] == 'C'
		&& type == DOWN)
		return (1);
	if (init->map[init->player_index - 1] == 'C' && type == LEFT)
		return (1);
	if (init->map[init->player_index + 1] == 'C' && type == RIGHT)
		return (1);
	return (0);
}

int	ft_wall_check(t_init *init, int type)
{
	if (init->map[init->player_index - (init->map_column_c + 1)] != '1'
		&& type == UP)
		return (1);
	if (init->map[init->player_index + (init->map_column_c + 1)] != '1'
		&& type == DOWN)
		return (1);
	if (init->map[init->player_index - 1] != '1' && type == LEFT)
		return (1);
	if (init->map[init->player_index + 1] != '1' && type == RIGHT)
		return (1);
	return (0);
}

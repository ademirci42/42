/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:42:40 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:44:00 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	ft_sk_check(t_init *init, int type)
{
	if (init->map[init->player_index - (init->map_column_c + 1)] == 'S'
		&& type == UP)
		return (1);
	if (init->map[init->player_index + (init->map_column_c + 1)] == 'S'
		&& type == DOWN)
		return (1);
	if (init->map[init->player_index - 1] == 'S' && type == LEFT)
		return (1);
	if (init->map[init->player_index + 1] == 'S' && type == RIGHT)
		return (1);
	return (0);
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

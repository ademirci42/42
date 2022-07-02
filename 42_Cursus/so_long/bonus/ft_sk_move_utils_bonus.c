/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sk_move_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:28:29 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 04:28:31 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	ft_sk_type_check(t_init *init, int index, int chobj, int type)
{
	if (init->map[index - (init->map_column_c + 1)] != chobj && type == UP)
		return (1);
	if (init->map[index + (init->map_column_c + 1)] != chobj && type == DOWN)
		return (1);
	if (init->map[index - 1] != chobj && type == LEFT)
		return (1);
	if (init->map[index + 1] != chobj && type == RIGHT)
		return (1);
	return (0);
}

int	ft_all_check(t_init *init, int index, int type)
{
	if (ft_sk_type_check(init, index, 'E', type)
		&& ft_sk_type_check(init, index, 'C', type)
		&& ft_sk_type_check(init, index, '1', type))
		return (1);
	return (0);
}

void	ft_sk_left_move(t_init *init, int index)
{
	init->sk_status = LEFT;
	if (init->map[index - 1] == 'P')
		ft_error(init, F_GMOV);
	ft_swap_index(init, index - 1, index, 'S');
}

void	ft_sk_right_move(t_init *init, int index)
{
	init->sk_status = RIGHT;
	if (init->map[index + 1] == 'P')
		ft_error(init, F_GMOV);
	ft_swap_index(init, index + 1, index, 'S');
}

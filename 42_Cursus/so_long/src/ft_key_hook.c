/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:46:20 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 02:47:10 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_c_item_count_finder(t_init *init)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (init->map[++i])
	{
		if (init->map[i] == 'C')
			c++;
	}
	init->total_c_item = c;
}

void	ft_plyr_index(t_init *init)
{
	int	i;

	i = 0;
	while (init->map[i] != 'P')
		i++;
	init->player_index = i;
}

int	ft_key_hook(int key, t_init *init)
{
	static int	i;
	int			pi;

	pi = init->player_index;
	ft_plyr_index(init);
	if (key == KEY_W)
		ft_player_up(init);
	if (key == KEY_A)
		ft_player_left(init);
	if (key == KEY_S)
		ft_player_down(init);
	if (key == KEY_D)
		ft_player_right(init);
	if (key == KEY_ESC)
		ft_error(init, "");
	if (pi != init->player_index)
	{
		i++;
		ft_printf("\rHareket Sayısı : %d", i);
	}
	return (0);
}

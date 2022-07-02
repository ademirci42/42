/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:32:19 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:32:55 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

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

void	ft_put_string_window(t_init *init, int i)
{
	ft_put_image(init, init->env.wall, 0, 0);
	mlx_string_put(init->init, init->new_window, 25, 29, 2, ft_itoa(i));
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
		ft_put_string_window(init, i);
	}
	return (0);
}

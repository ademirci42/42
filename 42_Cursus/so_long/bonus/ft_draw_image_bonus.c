/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:23:00 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:23:57 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	ft_put_image(t_init *init, void *type, int c, int l)
{
	mlx_put_image_to_window(init->init, init->new_window, type, c * T_WIDTH, l
		* T_HEIGHT);
}

void	ft_put_image_pl(t_init *init, void *type, int c, int l)
{
	init->player_column = c;
	init->player_line = l;
	mlx_put_image_to_window(init->init, init->new_window, type, c * T_WIDTH, l
		* T_HEIGHT);
}

void	ft_type_draw(t_init *init, int i, int c, int l)
{
	if (init->map[i] == 'P')
	{
		ft_put_image(init, init->env.empty_area, c, l);
		ft_put_image_pl(init, init->pl.p_front, c, l);
	}
	if (init->map[i] == 'S')
	{
		ft_put_image(init, init->env.empty_area, c, l);
		ft_put_image(init, init->sk.s_front, c, l);
	}
	if (init->map[i] == 'C')
		ft_put_image(init, init->env.collect_item, c, l);
	if (init->map[i] == 'E')
		ft_put_image(init, init->env.exit, c, l);
	if (init->map[i] == '0')
		ft_put_image(init, init->env.empty_area, c, l);
	if (init->map[i] == '1')
		ft_put_image(init, init->env.wall, c, l);
}

void	ft_draw_image(t_init *init)
{
	int	i;
	int	l;
	int	c;

	i = -1;
	l = 0;
	c = 0;
	while (init->map[++i])
	{
		ft_type_draw(init, i, c, l);
		if (init->map[i] == '\n')
		{
			l++;
			c = -1;
		}
		c++;
	}
}

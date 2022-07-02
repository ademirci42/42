/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:24:50 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:28:13 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	ft_column(t_init *init, int index)
{
	while (index > init->map_column_c)
		index -= init->map_column_c + 1;
	return (index);
}

int	ft_line(t_init *init, int index)
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (++i <= index)
	{
		if (init->map[i] == '\n')
			c++;
	}
	return (c);
}

void	ft_anim(t_init *init)
{
	static int		c;
	unsigned long	i;
	int				j;

	i = -1;
	j = -1;
	if (c >= 5)
		c = 0;
	while (++i < ft_strlen(init->map))
	{
		if (init->map[i] == 'C')
			ft_put_image(init, init->env.ci_anim[c], ft_column(init, i),
				ft_line(init, i));
		else if (init->map[i] == 'P')
			ft_pl_anim(init, i, c);
		else if (init->map[i] == 'S')
			ft_sk_anim(init, i, c);
		else if (init->map[i] == '0')
			ft_put_image(init, init->env.empty_area, ft_column(init, i),
				ft_line(init, i));
	}
	c++;
}

int	ft_game_loop(t_init *init)
{
	static int	i;
	static int	j;

	i++;
	j++;
	if (i >= 3042)
	{
		ft_sk_move(init);
		i = 0;
	}
	if (j >= 1042)
	{
		ft_anim(init);
		j = 0;
	}
	return (0);
}

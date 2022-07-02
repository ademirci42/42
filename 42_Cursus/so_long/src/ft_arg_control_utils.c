/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_control_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:34:46 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 02:41:20 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_item_control(t_init *init)
{
	if (!ft_strchr(init->map, 'P'))
		ft_error(init, E_PLYR);
	if (!ft_strchr(init->map, 'E'))
		ft_error(init, E_EXIT);
	if (!ft_strchr(init->map, 'C'))
		ft_error(init, E_CLCT);
}

void	ft_column_control(t_init *init)
{
	int		i;
	int		l;
	char	*map;

	i = 0;
	l = 1;
	map = init->map;
	while (map[i] && l < init->map_line_c)
	{
		if (ft_strlen_nl(&map[i]) != init->map_column_c)
			ft_error(init, W_COLC);
		while (map[i] != '\n')
			i++;
		i++;
		l++;
	}
}

void	ft_wall_control(t_init *init)
{
	unsigned long	c;
	int				l;

	c = 0;
	l = 1;
	while (c < ft_strlen(init->map))
	{
		if (init->map[c] == '\n')
		{
			if (init->map[c + 1] != '1' || init->map[c - 1] != '1')
				ft_error(init, E_WALL);
			l++;
			c++;
		}
		if ((l == 1 || l == init->map_line_c) && init->map[c] != '1')
			ft_error(init, E_WALL);
		c++;
	}
}

void	ft_character_control(t_init *init)
{
	int		i;
	char	*m;

	i = 0;
	m = init->map;
	while (m[i])
	{
		if (m[i] != '0' && m[i] != '1' && m[i] != '\n'
			&& m[i] != 'P' && m[i] != 'C' && m[i] != 'E')
			ft_error(init, W_UDTFD);
		i++;
	}
}

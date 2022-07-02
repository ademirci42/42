/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_control.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:33:15 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 02:33:22 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_read_map(char *arg, t_init *init)
{
	int		fd;
	int		i;
	char	*map;

	i = 0;
	fd = open(arg, O_RDONLY);
	if (fd <= 0)
		ft_error(init, E_MAP);
	map = ft_strdup("");
	while (map[ft_strlen(map) - 1] == '\n' || i == 0)
	{
		map = ft_strjoin(map, get_next_line(fd));
		i++;
	}
	close(fd);
	init->map = map;
	init->map_line_c = i;
	init->map_column_c = ft_strlen_nl(map);
}

void	ft_ber_control(char *arg, t_init *init)
{
	if (!ft_strnstr(arg, ".ber", ft_strlen(arg)))
		ft_error(init, W_FTYP);
}

void	ft_map_control(char *arg, t_init *init)
{
	ft_ber_control(arg, init);
	ft_read_map(arg, init);
	ft_character_control(init);
	ft_wall_control(init);
	ft_column_control(init);
	ft_item_control(init);
}

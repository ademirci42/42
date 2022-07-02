/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:52:51 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 09:58:50 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ft_init(t_init *init)
{
	init->init = mlx_init();
	init->count_c_item = 0;
	init->new_window = mlx_new_window(init->init,
			init->map_column_c * T_WIDTH,
			init->map_line_c * T_HEIGHT,
			"So_Long");
	init->player = mlx_xpm_file_to_image(init->init, "./textures/player.xpm",
			&init->image_w_h, &init->image_w_h);
	init->exit = mlx_xpm_file_to_image(init->init, "./textures/exit.xpm",
			&init->image_w_h, &init->image_w_h);
	init->wall = mlx_xpm_file_to_image(init->init, "./textures/wall.xpm",
			&init->image_w_h, &init->image_w_h);
	init->empty_area = mlx_xpm_file_to_image(init->init,
			"./textures/empty_area.xpm", &init->image_w_h, &init->image_w_h);
	init->collect_item = mlx_xpm_file_to_image(init->init,
			"./textures/collect_item.xpm", &init->image_w_h, &init->image_w_h);
}

int	ft_strlen_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	ft_error(t_init *init, char *msg)
{
	ft_printf("%s", msg);
	free(init);
	exit(0);
}

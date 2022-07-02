/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:44:27 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:44:56 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	exit_hook(t_init *init)
{
	free(init->map);
	free(init);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_init	*init;

	init = malloc(sizeof(t_init));
	if (!init)
		exit(1);
	if (argc != 2)
		ft_error(init, W_ARGC);
	ft_map_control(argv[1], init);
	ft_init(init);
	ft_draw_image(init);
	ft_c_item_count_finder(init);
	mlx_loop_hook(init->init, ft_game_loop, init);
	mlx_key_hook(init->new_window, ft_key_hook, init);
	mlx_hook(init->new_window, 17, 0, exit_hook, init);
	mlx_loop(init->init);
	return (0);
}

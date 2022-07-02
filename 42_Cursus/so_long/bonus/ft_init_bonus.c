/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:28:41 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:29:59 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	*ft_xpm(t_init *init, char *src)
{
	return (mlx_xpm_file_to_image(init->init, src, &init->image_w_h,
			&init->image_w_h));
}

void	ft_player_init(t_init *init)
{
	init->pl.p_back = ft_xpm(init, "./textures/bonus/c_4_side/c_back.xpm");
	init->pl.p_front = ft_xpm(init, "./textures/bonus/c_4_side/c_front.xpm");
	init->pl.p_left = ft_xpm(init, "./textures/bonus/c_4_side/c_left.xpm");
	init->pl.p_right = ft_xpm(init, "./textures/bonus/c_4_side/c_right.xpm");
	ft_pl_front_init(init);
	ft_pl_back_init(init);
	ft_pl_left_init(init);
	ft_pl_right_init(init);
}

void	ft_environment_init(t_init *init)
{
	init->env.exit = ft_xpm(init, "./textures/exit.xpm");
	init->env.wall = ft_xpm(init, "./textures/wall.xpm");
	init->env.empty_area = ft_xpm(init, "./textures/empty_area.xpm");
	init->env.collect_item = ft_xpm(init, "./textures/collect_item.xpm");
	init->env.ci_anim[0] = ft_xpm(init, "./textures/bonus/col_item/ci_1.xpm");
	init->env.ci_anim[1] = ft_xpm(init, "./textures/bonus/col_item/ci_2.xpm");
	init->env.ci_anim[2] = ft_xpm(init, "./textures/bonus/col_item/ci_3.xpm");
	init->env.ci_anim[3] = ft_xpm(init, "./textures/bonus/col_item/ci_4.xpm");
	init->env.ci_anim[4] = ft_xpm(init, "./textures/bonus/col_item/ci_5.xpm");
	init->env.ci_anim[5] = ft_xpm(init, "./textures/bonus/col_item/ci_6.xpm");
}

void	ft_skeleton_init(t_init *init)
{
	init->sk.s_back = ft_xpm(init, "./textures/bonus/sk_4_side/sk_back.xpm");
	init->sk.s_front = ft_xpm(init, "./textures/bonus/sk_4_side/sk_front.xpm");
	init->sk.s_left = ft_xpm(init, "./textures/bonus/sk_4_side/sk_left.xpm");
	init->sk.s_right = ft_xpm(init, "./textures/bonus/sk_4_side/sk_right.xpm");
	ft_sk_front_init(init);
	ft_sk_back_init(init);
	ft_sk_left_init(init);
	ft_sk_right_init(init);
}

void	ft_init(t_init *init)
{
	init->init = mlx_init();
	init->count_c_item = 0;
	init->new_window = mlx_new_window(init->init,
			init->map_column_c * T_WIDTH,
			init->map_line_c * T_HEIGHT,
			"So_Long");
	ft_player_init(init);
	ft_environment_init(init);
	ft_skeleton_init(init);
}

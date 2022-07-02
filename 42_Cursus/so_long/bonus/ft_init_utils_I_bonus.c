/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:30:19 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:30:59 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	ft_pl_front_init(t_init *init)
{
	init->pl.p_anim_f[0] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_1.xpm");
	init->pl.p_anim_f[1] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_2.xpm");
	init->pl.p_anim_f[2] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_3.xpm");
	init->pl.p_anim_f[3] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_4.xpm");
	init->pl.p_anim_f[4] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_5.xpm");
	init->pl.p_anim_f[5] = ft_xpm(init,
			"./textures/bonus/c_mv/down/ch_fr_6.xpm");
}

void	ft_pl_back_init(t_init *init)
{
	init->pl.p_anim_b[0] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_1.xpm");
	init->pl.p_anim_b[1] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_2.xpm");
	init->pl.p_anim_b[2] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_3.xpm");
	init->pl.p_anim_b[3] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_4.xpm");
	init->pl.p_anim_b[4] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_5.xpm");
	init->pl.p_anim_b[5] = ft_xpm(init, "./textures/bonus/c_mv/up/ch_bc_6.xpm");
}

void	ft_pl_left_init(t_init *init)
{
	init->pl.p_anim_l[0] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_1.xpm");
	init->pl.p_anim_l[1] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_2.xpm");
	init->pl.p_anim_l[2] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_3.xpm");
	init->pl.p_anim_l[3] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_4.xpm");
	init->pl.p_anim_l[4] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_5.xpm");
	init->pl.p_anim_l[5] = ft_xpm(init,
			"./textures/bonus/c_mv/left/ch_lf_6.xpm");
}

void	ft_pl_right_init(t_init *init)
{
	init->pl.p_anim_r[0] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_1.xpm");
	init->pl.p_anim_r[1] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_2.xpm");
	init->pl.p_anim_r[2] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_3.xpm");
	init->pl.p_anim_r[3] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_4.xpm");
	init->pl.p_anim_r[4] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_5.xpm");
	init->pl.p_anim_r[5] = ft_xpm(init,
			"./textures/bonus/c_mv/right/ch_rt_6.xpm");
}

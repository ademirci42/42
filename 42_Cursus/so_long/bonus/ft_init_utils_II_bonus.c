/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_utils_II.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:07:21 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 04:07:22 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	ft_sk_front_init(t_init *init)
{
	init->sk.sk_anim_f[0] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_1.xpm");
	init->sk.sk_anim_f[1] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_2.xpm");
	init->sk.sk_anim_f[2] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_3.xpm");
	init->sk.sk_anim_f[3] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_4.xpm");
	init->sk.sk_anim_f[4] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_5.xpm");
	init->sk.sk_anim_f[5] = ft_xpm(init,
			"./textures/bonus/sk_mv/down/sk_fr_6.xpm");
}

void	ft_sk_back_init(t_init *init)
{
	init->sk.sk_anim_b[0] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_1.xpm");
	init->sk.sk_anim_b[1] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_2.xpm");
	init->sk.sk_anim_b[2] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_3.xpm");
	init->sk.sk_anim_b[3] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_4.xpm");
	init->sk.sk_anim_b[4] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_5.xpm");
	init->sk.sk_anim_b[5] = ft_xpm(init,
			"./textures/bonus/sk_mv/up/sk_bc_6.xpm");
}

void	ft_sk_left_init(t_init *init)
{
	init->sk.sk_anim_l[0] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_1.xpm");
	init->sk.sk_anim_l[1] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_2.xpm");
	init->sk.sk_anim_l[2] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_3.xpm");
	init->sk.sk_anim_l[3] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_4.xpm");
	init->sk.sk_anim_l[4] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_5.xpm");
	init->sk.sk_anim_l[5] = ft_xpm(init,
			"./textures/bonus/sk_mv/left/sk_lf_6.xpm");
}

void	ft_sk_right_init(t_init *init)
{
	init->sk.sk_anim_r[0] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_1.xpm");
	init->sk.sk_anim_r[1] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_2.xpm");
	init->sk.sk_anim_r[2] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_3.xpm");
	init->sk.sk_anim_r[3] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_4.xpm");
	init->sk.sk_anim_r[4] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_5.xpm");
	init->sk.sk_anim_r[5] = ft_xpm(init,
			"./textures/bonus/sk_mv/right/sk_rt_6.xpm");
}

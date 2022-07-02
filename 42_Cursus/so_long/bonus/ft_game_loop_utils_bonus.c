/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game _loop_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:57:28 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:57:29 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	ft_pl_anim(t_init *init, int i, int c)
{
	if (!init->player_status)
		ft_put_image_pl(init, init->pl.p_anim_f[c], ft_column(init, i),
			ft_line(init, i));
	if (init->player_status == UP)
		ft_put_image_pl(init, init->pl.p_anim_b[c], ft_column(init, i),
			ft_line(init, i));
	if (init->player_status == DOWN)
		ft_put_image_pl(init, init->pl.p_anim_f[c], ft_column(init, i),
			ft_line(init, i));
	if (init->player_status == LEFT)
		ft_put_image_pl(init, init->pl.p_anim_l[c], ft_column(init, i),
			ft_line(init, i));
	if (init->player_status == RIGHT)
		ft_put_image_pl(init, init->pl.p_anim_r[c], ft_column(init, i),
			ft_line(init, i));
}

void	ft_sk_anim(t_init *init, int i, int c)
{
	if (!init->sk_status)
		ft_put_image(init, init->sk.sk_anim_f[c], ft_column(init, i),
			ft_line(init, i));
	if (init->sk_status == UP)
		ft_put_image(init, init->sk.sk_anim_b[c], ft_column(init, i),
			ft_line(init, i));
	if (init->sk_status == DOWN)
		ft_put_image(init, init->sk.sk_anim_f[c], ft_column(init, i),
			ft_line(init, i));
	if (init->sk_status == LEFT)
		ft_put_image(init, init->sk.sk_anim_l[c], ft_column(init, i),
			ft_line(init, i));
	if (init->sk_status == RIGHT)
		ft_put_image(init, init->sk.sk_anim_r[c], ft_column(init, i),
			ft_line(init, i));
}

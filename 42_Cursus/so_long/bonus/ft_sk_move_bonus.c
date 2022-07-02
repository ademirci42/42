/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sk_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:37:24 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 03:39:31 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	ft_sk_move_1(t_init *init, int j)
{
	while (j >= 0)
	{
		if (init->map[j] == 'S')
		{
			if (ft_all_check(init, j, RIGHT))
				ft_sk_right_move(init, j);
			else
				init->sk_mv = 0;
		}
		j--;
	}
}

void	ft_sk_move_other(t_init *init, unsigned long i)
{
	while (i < ft_strlen(init->map))
	{
		if (init->map[i] == 'S')
		{
			if (ft_all_check(init, i, LEFT))
				ft_sk_left_move(init, i);
			else
				init->sk_mv = 1;
		}
		i++;
	}
}

void	ft_sk_move(t_init *init)
{
	unsigned long	i;
	int				j;

	j = ft_strlen(init->map);
	i = 0;
	if (init->sk_mv != 1)
		ft_sk_move_other(init, i);
	if (init->sk_mv == 1)
		ft_sk_move_1(init, j);
}

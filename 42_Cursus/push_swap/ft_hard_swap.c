/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hard_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:37:45 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:37:50 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_hard_swap(t_stacks *stacks)
{
	int	i;

	i = 1;
	while (!ft_sort_control(stacks->a))
	{
		ft_pb_pivot(stacks);
		if (i == 1 && ft_list_size(stacks->b) > 5)
		{
			ft_pa_pivot(stacks);
			i--;
		}
	}
	if (stacks->b)
		give_back(stacks);
	free(stacks->b);
}

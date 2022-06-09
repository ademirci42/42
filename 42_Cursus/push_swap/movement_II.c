/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_II.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:40:39 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:40 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stacks *stacks)
{
	t_stack	*push;

	if (stacks->b)
	{
		push = stacks->b->next;
		stacks->b->next = stacks->a;
		stacks->a = stacks->b;
		stacks->b = push;
	}
}

void	ft_pa_pivot(t_stacks *stacks)
{
	int	pivot;
	int	indx;

	pivot = ft_pivot(stacks->b);
	while (ft_min(stacks->b) != pivot && !is_revsorted(stacks->b))
	{
		indx = find_index(stacks->b, pivot);
		if (indx >= ft_list_size(stacks->a) / 2 && indx != 0)
			ft_mission_b(stacks, RRB);
		else if (indx < ft_list_size(stacks->a) / 2 && indx != 0)
			ft_mission_b(stacks, RB);
		else if (indx == 0)
			ft_mission_a(stacks, PA);
	}
}

void	ft_pb(t_stacks *stacks)
{
	t_stack		*b;
	int			data_swap;
	static int	swtch;

	data_swap = stacks->a->data;
	if (swtch == 0)
	{
		b = malloc(sizeof(t_stack));
		if (!b)
			exit(1);
		b->data = data_swap;
		b->next = NULL;
		stacks->b = b;
		stacks->a = stacks->a->next;
		swtch = 1;
	}
	else
	{
		stacks->b = ft_add_front(stacks->b, data_swap);
		stacks->a = stacks->a->next;
	}
}

void	ft_pb_pivot(t_stacks *stacks)
{
	int	pivot;
	int	size;
	int	index;

	pivot = ft_pivot(stacks->a);
	while (ft_min(stacks->a) != pivot)
	{
		size = ft_list_size(stacks->a);
		index = find_index(stacks->a, pivot);
		if (index <= size / 2 && index != 0)
			ft_mission_a(stacks, RA);
		else if (index >= size / 2 && index != 0)
			ft_mission_a(stacks, RRA);
		else
			ft_mission_b(stacks, PB);
	}
}

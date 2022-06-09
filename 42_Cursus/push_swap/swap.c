/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:41:14 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:41:15 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort_control(t_stack *stack)
{
	t_stack	*new;

	new = stack;
	while (new->next)
	{
		if (new->data > new->next->data)
			return (0);
		new = new->next;
	}
	return (1);
}

void	ft_med_swap(t_stacks *stacks)
{
	int	size;
	int	min_indx;

	size = ft_list_size(stacks->a);
	while (!ft_sort_control(stacks->a) && ft_list_size(stacks->a) > 3)
	{
		min_indx = ft_min_index(stacks->a);
		if (min_indx >= size / 2 && min_indx != 0)
			ft_mission_a(stacks, RRA);
		else if (min_indx < size / 2 && min_indx != 0)
			ft_mission_a(stacks, RA);
		else if (min_indx == 0)
			ft_mission_b(stacks, PB);
	}
	if (ft_list_size(stacks->a) == 3)
	{
		ft_mini_swap(stacks);
	}
	while (stacks->b)
		ft_mission_a(stacks, PA);
}

void	ft_fst_greater_snd(t_stack *stack, t_stacks *stacks)
{
	if (stack->data > stack->next->next->data)
	{
		if (stack->next->data > stack->next->next->data)
		{
			ft_mission_a(stacks, SA);
			ft_mission_a(stacks, RRA);
		}
		else
			ft_mission_a(stacks, RA);
	}
	else
		ft_mission_a(stacks, SA);
}

void	ft_fst_greater_trd(t_stack *s, t_stacks *stacks)
{
	if (s->data > s->next->next->data)
		ft_mission_a(stacks, RRA);
	else if (s->data < s->next->next->data)
	{
		ft_mission_a(stacks, SA);
		ft_mission_a(stacks, RA);
	}		
}

void	ft_mini_swap(t_stacks *stacks)
{
	t_stack	*s;

	s = stacks->a;
	if (s->data > s->next->data)
		ft_fst_greater_snd(s, stacks);
	else
		ft_fst_greater_trd(s, stacks);
}

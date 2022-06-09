/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:41:21 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:41:26 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_stack *stack, int ort_pivot)
{
	int	first;
	int	last;
	int	j;
	int	size;

	first = 0;
	last = 0;
	size = ft_list_size(stack);
	while (stack && ort_pivot <= stack->data)
	{
		stack = stack->next;
		first++;
	}
	j = first;
	while (stack)
	{
		if (ort_pivot > stack->data)
			last = j;
		stack = stack->next;
		j++;
	}
	if (first > (size - last))
		return (last);
	return (first);
}

int	big_index(t_stack *stack)
{
	int	i;
	int	data;
	int	idx;

	data = stack->data;
	i = 0;
	idx = 0;
	while (stack)
	{
		if (data >= stack->data)
		{
			stack = stack->next;
			i++;
		}
		else
		{
			data = stack->data;
			idx = i;
		}
	}
	return (idx);
}

void	give_back(t_stacks *stacks)
{
	int	size;
	int	index;

	while (stacks->b)
	{
		size = ft_list_size(stacks->b);
		index = big_index(stacks->b);
		if (index == 1)
			ft_mission_b(stacks, SB);
		else if (index <= size / 2 && index != 0)
			ft_mission_b(stacks, RB);
		else if (index >= size / 2 && index != 0)
			ft_mission_b(stacks, RRB);
		else
			ft_mission_a(stacks, PA);
	}
}

int	ft_min_index(t_stack *stack)
{
	int		i;
	int		data;
	int		min;
	t_stack	*new;

	data = stack->data;
	min = 0;
	i = 0;
	new = stack;
	while (new)
	{
		if (data <= new->data)
		{
			new = new->next;
			i++;
		}
		else
		{
			data = new->data;
			min = i;
		}
	}
	return (min);
}

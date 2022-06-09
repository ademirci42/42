/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pivot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:39:14 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:15 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *stack)
{
	t_stack	*tmp;
	int		indx;
	int		i;

	i = 0;
	tmp = stack;
	indx = ft_min_index(stack);
	while (i < indx)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->data);
}

int	ft_max(t_stack *stack)
{
	t_stack	*tmp;
	int		max;

	tmp = stack;
	max = tmp->data;
	while (tmp->next)
	{
		if (max < tmp->next->data)
			max = tmp->next->data;
		tmp = tmp->next;
	}
	return (max);
}

int	where(t_stack *stack, long long average)
{
	int	num;
	int	max;

	max = ft_max(stack);
	num = max;
	while (stack)
	{
		if (stack->data > average && stack->data < num)
			num = stack->data;
		stack = stack->next;
	}
	return (num);
}

int	ft_pivot(t_stack *stack)
{
	t_stack		*tmp;
	long long	ret;

	tmp = stack;
	ret = 0;
	while (tmp)
	{
		ret += tmp->data;
		tmp = tmp->next;
	}
	ret = ret / ft_list_size(stack);
	return (where(stack, ret));
}

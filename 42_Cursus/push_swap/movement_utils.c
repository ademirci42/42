/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:40:50 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:51 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_revsorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}

t_stack	*ft_lastlst(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*ft_add_front(t_stack *stack, int count)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		exit(1);
	new_stack->data = count;
	new_stack->next = stack;
	return (new_stack);
}

t_stack	*ft_add_end_data(t_stack *stack, int data)
{
	t_stack	*new_stack;
	t_stack	*last;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		exit(1);
	new_stack->data = data;
	new_stack->next = NULL;
	last = ft_lastlst(stack);
	last->next = new_stack;
	return (stack);
}

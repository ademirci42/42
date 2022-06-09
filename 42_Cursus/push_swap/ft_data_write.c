/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:37:33 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:37:34 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_add_back(t_stack *stack)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		exit(1);
	new_stack->next = stack;
	return (new_stack);
}

void	ft_data_write(t_stacks *stacks, t_data *new)
{
	int		i;
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		exit(1);
	stack->next = NULL;
	i = new->data_count - 1;
	while (i >= 0)
	{
		stack->data = new->data[i];
		i--;
		if (i >= 0)
			stack = ft_add_back(stack);
	}
	stacks->a = stack;
	stacks->data_count = new->data_count;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:40:16 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:18 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stkclear(t_stack **stk)
{
	t_stack	*stack;

	stack = *stk;
	while (*stk)
	{
		stack = stack->next;
		if ((*stk)->next != NULL)
			(*stk)->next = NULL;
		free(*stk);
		*stk = stack;
	}
	free(stack);
}

int	push_swap(t_stacks *stacks)
{
	int	list_size;

	list_size = ft_list_size((stacks)->a);
	if (list_size == 2)
		ft_mission_a(stacks, SA);
	else if (list_size == 3)
		ft_mini_swap(stacks);
	else if (list_size == 5)
		ft_med_swap(stacks);
	else
		ft_hard_swap(stacks);
	return (0);
}

void	stacks_fill_control(t_stack *stack)
{
	if (stack == NULL)
		ft_stkclear(&stack);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	t_data		*new;

	if (argc < 2)
	{
		exit(1);
	}
	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		return (0);
	new = malloc(sizeof(t_data));
	if (!new)
	{
		free(stacks);
		return (0);
	}
	if (ft_validation(argc, argv, new))
		ft_data_write(stacks, new);
	else
	{
		free(stacks);
		return (0);
	}
	push_swap(stacks);
}

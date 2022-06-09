/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_I.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:40:28 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:29 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_sb(t_stack **stack)
{
	int	data_swap;

	data_swap = (*stack)->next->data;
	(*stack)->next->data = (*stack)->data;
	(*stack)->data = data_swap;
}

void	ft_ra_rb(t_stack **stack)
{
	int	data;

	data = (*stack)->data;
	*stack = (*stack)->next;
	*stack = ft_add_end_data(*stack, data);
}

void	ft_rra_rrb(t_stack **stack)
{
	int		count;
	int		size;
	int		i;
	t_stack	*a;

	i = 0;
	count = ft_lastlst(*stack)->data;
	*stack = ft_add_front(*stack, count);
	size = ft_list_size(*stack);
	a = *stack;
	while (i < size - 2)
	{
		a = a->next;
		i++;
	}
	free(a->next);
	a->next = NULL;
}

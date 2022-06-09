/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mission.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:38:13 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:05 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mission_b(t_stacks *stacks, int mission)
{
	if (mission == SB)
	{
		ft_printf("sb\n");
		ft_sa_sb(&(stacks)->b);
	}
	else if (mission == RB)
	{
		ft_printf("rb\n");
		ft_ra_rb(&(stacks)->b);
	}
	else if (mission == RRB)
	{
		ft_printf("rrb\n");
		ft_rra_rrb(&(stacks)->b);
	}
	else if (mission == PB)
	{
		ft_printf("pb\n");
		ft_pb(stacks);
	}
}

void	ft_mission_a(t_stacks *stacks, int mission)
{
	if (mission == SA)
	{
		ft_printf("sa\n");
		ft_sa_sb(&(stacks)->a);
	}
	else if (mission == RA)
	{
		ft_printf("ra\n");
		ft_ra_rb(&(stacks)->a);
	}
	else if (mission == RRA)
	{
		ft_printf("rra\n");
		ft_rra_rrb(&(stacks)->a);
	}
	else if (mission == PA)
	{
		ft_printf("pa\n");
		ft_pa(stacks);
	}
}

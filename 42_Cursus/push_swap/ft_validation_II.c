/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation_II.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:39:56 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:57 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_transfer(char **arg, t_data *new)
{
	int	i;

	i = 0;
	while (i < new->data_count && *arg)
	{
		if (!ft_number_control(*arg))
		{
			ft_printf("Error\n");
			exit(1);
		}
		new->data[i] = ft_atoi(split_char(*arg));
		i++;
		arg++;
	}
}

void	ft_data_size_write(char **data_split, t_data *new)
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = data_split;
	while (*tmp)
	{
		i++;
		tmp++;
	}
	new->data_count = i;
}

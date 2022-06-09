/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation_I.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:39:30 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:44 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_number_control(char *arg)
{
	while (*arg)
	{
		if (INT_MAX < ft_atoi_long(arg) || INT_MIN > ft_atoi_long(arg))
			return (0);
		if (!ft_isdigit_negative(*arg))
			return (0);
		arg++;
	}
	return (1);
}

int	ft_repeat_control(t_data *new)
{
	int	i;
	int	j;

	i = 0;
	if (!new)
		return (0);
	while (i < new->data_count)
	{
		j = i;
		while (new->data[++j])
		{
			if (new->data[i] == new->data[j])
				return (0);
		}
		i++;
	}
	return (1);
}

// ft_sort_control int dizisinin içindeki 
// sayıların sıralı olup olmadığını kontrol eder.
int	ft_int_sort_control(t_data *new)
{
	int	i;

	i = 0;
	while (i < new->data_count - 1)
	{
		if (new->data[i] > new->data[i + 1])
			return (0);
		i++;
	}
	return (1);
}

// ft_validation argümanları alıp bir int dizisine yazar.
// Bunu yaparken argümanların sayı olup olmadığı
// ve tekrar edip etmediği kontrol edilir.
int	ft_validation(int argc, char **argv, t_data *new)
{
	char	**data_split;

	new->data_count = argc - 1;
	if (argc == 2)
	{
		data_split = ft_split(argv[1], ' ');
		ft_data_size_write(data_split, new);
		ft_data_transfer(data_split, new);
	}
	else
		ft_data_transfer(argv + 1, new);
	if (!ft_repeat_control(new))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (ft_int_sort_control(new))
	{
		exit(1);
	}
	return (1);
}

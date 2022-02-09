/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:52:26 by ademirci          #+#    #+#             */
/*   Updated: 2021/12/14 11:52:31 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num = max - min;
	*range = (int *)malloc(sizeof(int) * num);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < num)
	{
		(*range)[i] = min + i;
		i++;
	}	
	return (num);
}

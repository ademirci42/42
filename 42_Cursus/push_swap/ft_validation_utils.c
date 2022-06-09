/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:40:08 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:09 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*split_char(char *argv)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	newstr = malloc(sizeof(char));
	if (!newstr)
		exit(1);
	while (argv[i])
	{
		if (argv[i] == '\n' || argv[i] == '\t' || argv[i] == '\v'
			|| argv[i] == ' ' || argv[i] == '\r' || argv[i] == '\f')
		{
			i++;
			newstr[j] = argv[i];
		}
		else
			newstr[j] = argv[i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}

//int dizisindeki en küçük sayıyı bulur.
int	ft_min_int(int *numbers, int size)
{
	int	data;
	int	i;

	i = 0;
	data = numbers[i];
	while (i < size)
	{
		if (data > numbers[i])
			data = numbers[i];
		i++;
	}
	return (data);
}

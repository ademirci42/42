/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 03:45:12 by ademirci          #+#    #+#             */
/*   Updated: 2022/07/02 09:59:08 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	ft_strlen_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	ft_error(t_init *init, char *msg)
{
	ft_printf("%s", msg);
	free(init);
	exit(0);
}

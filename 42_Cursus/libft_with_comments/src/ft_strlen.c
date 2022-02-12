/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:57:08 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/06 16:40:04 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlen
// Girilen string'in karakter sayısını sayar ve döndürür.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])			// str'nin son karakterine gelene kadar.
		i++;			// i'yi arttır.
	return (i);			// "i" döndür.
}

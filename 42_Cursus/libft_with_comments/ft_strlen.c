/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:59 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:18:01 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlen
// Girilen string'in karakter sayısını sayar ve döndürür.

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)		// s'nin son karakterine gelene kadar.
		l++;			// l'yi arttır.
	return (l);			// "l" döndür.
}

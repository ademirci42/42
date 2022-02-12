/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:00:31 by ademirci          #+#    #+#             */
/*   Updated: 2022/01/31 15:34:14 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isascii
// Girilen karakterin ASCII tablosunda bir karakter olup olmadığını kontrol eder.
// Eğer ASCII tablosunda bir karakter ise "1" döndürür.
// Eğer aASCII tablosunda bir karakter değil ise "0" döndürür.

int	ft_isascii(int str)
{
	if (str >= 0 && str < 127)			// Eğer girilen değer ASCII değerine göre "0" ile "127" arasında ise
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}	

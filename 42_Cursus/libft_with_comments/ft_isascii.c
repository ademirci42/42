/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:34 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:17:35 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isascii
// Girilen karakterin ASCII tablosunda bir karakter olup olmadığını kontrol eder.
// Eğer ASCII tablosunda bir karakter ise "1" döndürür.
// Eğer aASCII tablosunda bir karakter değil ise "0" döndürür.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)			// Eğer girilen değer ASCII değerine göre "0" ile "127" arasında ise
		return (1);			// "1" döndür
	return (0);				// "0" döndür
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:46 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:17:47 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isprint 
// Girilen karakterin yazdırılabilir bir karakter olup olmadığını kontrol eder.
// Eğer yazdırılabilir bir karakter ise "1" döndürür.
// Eğer yazdırılabilir bir karakter değil ise "0" döndürür.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)			// Eğer girilen değer ASCII değerine göre "32" ile "126" arasında ise
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:19:08 by ademirci          #+#    #+#             */
/*   Updated: 2022/01/31 14:19:11 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isprint 
// Girilen karakterin yazdırılabilir bir karakter olup olmadığını kontrol eder.
// Eğer yazdırılabilir bir karakter ise "1" döndürür.
// Eğer yazdırılabilir bir karakter değil ise "0" döndürür.

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)			// Eğer girilen değer ASCII değerine göre "32" ile "126" arasında ise
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}

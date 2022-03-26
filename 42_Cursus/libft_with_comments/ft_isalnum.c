/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:15:40 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:16:03 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalnum
// Girilen karakterin alfanumerik bir karakter olup olmadığını kontrol eder.
// Eğer alfanumerik bir karakter ise "1" döndürür.
// Eğer alfanumerik bir karakter değil ise "0" döndürür.
// Çalışırken hem büyük hem küçük harfi dikkate alır.

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')			// Eğer girilen değer ASCII değerine göre "0" ile "9" arasında			
		|| (c >= '0' && c <= '9'))					// veya "a" ile "z" arasında veya "A" ile "Z" arasında ise
		return (1);							// "1" döndür
	return (0);								// "0" döndür
}

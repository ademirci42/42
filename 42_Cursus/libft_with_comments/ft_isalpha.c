/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:04 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:17:06 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalpha 
// Girilen karakterin alfabetik bir karakter olup olmadığını kontrol eder.
// Eğer alfabetik bir karakter ise "1" döndürür.
// Eğer alfabetik bir karakter değil ise "0" döndürür.
// Çalışırken hem büyük hem küçük harfi dikkate alır.

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))			// Eğer girilen değer ASCII değerine göre "a" ile "z" arasında veya "A" ile "Z" arasında ise			
		return (1);							// "1" döndür
	return (0);								// "0" döndür
}

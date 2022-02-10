/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:41:06 by ademirci          #+#    #+#             */
/*   Updated: 2022/01/31 12:41:08 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalpha 
// Girilen karakterin alfabetik bir karakter olup olmadığını kontrol eder.
// Eğer alfabetik bir karakter ise "1" döndürür.
// Eğer alfabetik bir karakter değil ise "0" döndürür.
// Çalışırken hem büyük hem küçük harfi dikkate alır.

int	ft_isalpha(int str)
{
	if (str >= 'a' && str <= 'z')			// Eğer girilen değer ASCII değerine göre "a" ile "z" arasında ise
		return (1);				// "1" döndür	
	else if (str >= 'A' && str <= 'Z')		// Eğer girilen değer ASCII değerine göre "A" ile "Z" arasında ise
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}

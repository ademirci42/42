/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:47:33 by ademirci          #+#    #+#             */
/*   Updated: 2022/01/31 13:47:34 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isalnum
// Girilen karakterin alfanumerik bir karakter olup olmadığını kontrol eder.
// Eğer alfanumerik bir karakter ise "1" döndürür.
// Eğer alfanumerik bir karakter değil ise "0" döndürür.
// Çalışırken hem büyük hem küçük harfi dikkate alır.

int	ft_isalnum(int str)
{
	if ((str >= '0' && str <= '9') || (str >= 'a' && str <= 'z')			// Eğer girilen değer ASCII değerine göre "0" ile "9" arasında			
		|| (str >= 'A' && str <= 'Z'))						// veya "a" ile "z" arasında veya "A" ile "Z" arasında ise
		return (1);								// "1" döndür
	return (0);									// "0" döndür
}

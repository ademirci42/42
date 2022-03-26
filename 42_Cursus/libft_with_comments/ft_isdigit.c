/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:15 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:17:17 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isdigit
// Girilen karakterin numerik bir karakter olup olmadığını kontrol eder.
// Eğer numerik bir karakter ise "1" döndürür.
// Eğer numerik bir karakter değil ise "0" döndürür.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')			// Eğer girilen değer ASCII değerine göre "0" ile "9" arasında ise
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}

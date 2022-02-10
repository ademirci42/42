/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:00:00 by ademirci          #+#    #+#             */
/*   Updated: 2022/01/31 13:00:03 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isdigit
// Girilen karakterin numerik bir karakter olup olmadığını kontrol eder.
// Eğer numerik bir karakter ise "1" döndürür.
// Eğer numerik bir karakter değil ise "0" döndürür.

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')			// Eğer girilen değer ASCII değerine göre "0" ile "9" arasında ise		
		return (1);				// "1" döndür
	return (0);					// "0" döndür
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:04:24 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/01 17:01:42 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memset
// Girilen stringin sansürlenmesini sağlar.
// Fonksiyona sansürleme yaparken kullanılacak karakter ve soldan sağa kaç karakterin sansürleneceğinin girilmesi gerekir.
// Sansürlenmiş stringi geri döndürür.
// void *b    => String.
// int c      => Sansürlenirken kullanılacak karakter.
// size_t len => Sansürlenecek karakter sayısı (soldan sağa).

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;				// str pointer'ına b'yi takip ettirir.
	while (i < len)					// Sansürlenecek karakter sayısı i'den büyük olana kadar.
	{
		str[i] = c;				// str'nin "i" değerine "c" yi yaz.
		i++;					// "i" yi arttır.
	}
	return (str);					// "str" yi döndür.
}

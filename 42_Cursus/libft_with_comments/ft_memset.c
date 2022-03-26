/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:22:04 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:22:05 by ademirci         ###   ########.fr       */
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

	i = 0;
	while (i < len)						// Sansürlenecek karakter sayısı i'den büyük olana kadar.
	{
		((unsigned char *)b)[i] = c;			// "b" bir void pointer olduğu için char pointer tipine dönüştürülür ve i'nci indexi sansürlenir.
		i++;						// "i" yi arttır.
	}
	return (b);						// "b" yi döndür.
}

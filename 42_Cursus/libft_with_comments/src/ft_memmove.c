/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:58:46 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/06 16:00:29 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (0);
	if (src2 < dest)
	{
		while (++i <= len)
		{
			dest[len - i] = src2[len - i];
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}

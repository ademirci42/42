/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:54:49 by ademirci          #+#    #+#             */
/*   Updated: 2021/12/14 11:54:51 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	char	*str;
	int		len;

	x = 0;
	len = 0;
	while (x < size)
	{
		len += ft_strlen(strs[x]);
		x++;
	}
	len += ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		ft_strcat(str, strs[x]);
		if ((x + 1) < size)
			ft_strcat(str, sep);
		x++;
	}
	return (str);
}

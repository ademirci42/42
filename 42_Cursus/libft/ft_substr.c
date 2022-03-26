/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:26:10 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/22 14:26:12 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	a;

	i = start;
	j = 0;
	a = 0;
	while (a < len && s[a + start] != '\0')
		a++;
	new_str = (char *)malloc(a + 1);
	if (!s || !new_str)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		new_str[j++] = s[i++];
	}
	new_str[j] = '\0';
	return (new_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:12:19 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/10 15:12:52 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t    i;
    size_t    j;

    i = 0;
    while (i < n && s1[i] != '\0')
    {
        j = 0;
        while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
            j++;
        if (s2[j] == '\0')
            return ((char *)s1 + i);
        i++;
    }
    return (NULL);
} 

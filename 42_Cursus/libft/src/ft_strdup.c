/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:35:23 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/10 15:35:25 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t    i;
    size_t    len;
    char    *cpy;

    i = 0;
    len = ft_strlen(s1);
    cpy = (char *)malloc(sizeof(char) * (len + 1));
    if (cpy == NULL)
        return (NULL);
    return (ft_strcpy(cpy, s1));
}

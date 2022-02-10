/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:30:25 by ademirci          #+#    #+#             */
/*   Updated: 2022/02/10 15:30:26 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return (ptr);
    ft_bzero(ptr, size * count);
    return (ptr);
}

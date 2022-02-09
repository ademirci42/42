/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:00:32 by ademirci          #+#    #+#             */
/*   Updated: 2021/11/28 15:00:33 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r_alphabet;

	r_alphabet = 'z';
	while (r_alphabet >= 'a')
	{
		ft_putchar(r_alphabet);
		r_alphabet--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:46:20 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/17 15:48:44 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}

int	ft_pointer_adress(unsigned long int p)
{
	char	str[16];
	int		len;
	int		i;

	if (p == 0)
		return (ft_putstr("0x0"));
	len = ft_putstr("0x");
	ft_bzero(str, 16);
	i = 0;
	while (p)
	{
		str[i++] = "0123456789abcdef"[p % 16];
		p /= 16;
	}
	while (i--)
		len += write(1, &str[i], 1);
	return (len);
}

int	ft_putnbr(int number)
{
	int		len;
	char	*n;

	len = 0;
	n = ft_itoa(number);
	len += ft_putstr(n);
	free(n);
	return (len);
}

int	ft_unputnbr(unsigned long number)
{
	int	i;

	i = 0;
	if (number > 9)
		i += ft_unputnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
	return (i + 1);
}

int	ft_hexadecimal(unsigned int p, char *set)
{
	char	str[16];
	int		i;
	int		len;

	if (p == 0)
		return (ft_putstr("0"));
	ft_bzero(str, 16);
	i = 0;
	len = 0;
	while (p)
	{
		str[i] = set[p % 16];
		p /= 16;
		i++;
	}
	while (i--)
		len += write(1, &str[i], 1);
	return (len);
}

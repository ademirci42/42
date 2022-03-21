/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:40:17 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/17 15:44:42 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_selector(va_list arg, char type)
{
	int	i;

	if (type == 'c')
	{
		i = va_arg(arg, int);
		return (write(1, &i, 1));
	}	
	else if (type == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (type == 'p')
		return (ft_pointer_adress(va_arg(arg, unsigned long int)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (type == 'u')
		return (ft_unputnbr(va_arg(arg, unsigned long)));
	else if (type == 'x')
		return (ft_hexadecimal(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_hexadecimal(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (type == '%')
		return (ft_putstr("%"));
	return (0);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg;
	int		lenght;
	int		i;

	va_start(arg, type);
	i = 0;
	lenght = 0;
	while (type[i++])
	{	
		if (type[i] != '%')
			lenght += write(1, &type[i], 1);
		else
			lenght += ft_type_selector(arg, type[++i]);
	}
	va_end(arg);
	return (lenght);
}

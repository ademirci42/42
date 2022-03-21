/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:49:11 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/17 15:49:12 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int	ft_printf(const	char *type, ...);
int	ft_type_selector(va_list arg, char type);
int	ft_putstr(char *str);
int	ft_pointer_adress(unsigned long int p);
int	ft_putnbr(int number);
int	ft_unputnbr(unsigned long number);
int	ft_hexadecimal(unsigned int p, char *set);

#endif

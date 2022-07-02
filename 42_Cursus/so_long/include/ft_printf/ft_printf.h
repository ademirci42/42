/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:23:38 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/21 17:15:00 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *key, ...);

int		arg_printer(char c, va_list macro);

int		ft_putstr(char *c);

int		ft_putpointer(unsigned long int point);

int		ft_puthex(unsigned int point, char *charset);

int		ft_putnbr(int nb);

int		ft_putunsigned(unsigned int nb);

void	ft_bzero(void *str, size_t n);

char	*ft_itoa(int n);

void	*ft_memset(void *b, int c, size_t len);

#endif

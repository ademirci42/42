/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:31:17 by ademirci          #+#    #+#             */
/*   Updated: 2022/04/23 17:04:35 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define PIDERROR "PID numarasını ve mesajınızı girin!\n"
# define ARGERROR "Argüman sayısı yanlış!\n"

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

char	*ft_itoa(int n);
void	ft_putstr(char *str);
char	*ft_strjoin(char *s1, char const s2);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);

#endif

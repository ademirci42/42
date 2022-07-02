/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:02:48 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/09 16:02:49 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *line);
char	*ft_write_readed_line(char *line);
char	*ft_remove_writed_line(char *line);

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin_g(char *s1, char *s2);

#endif

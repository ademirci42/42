/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:10 by ademirci          #+#    #+#             */
/*   Updated: 2022/03/09 16:03:12 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_remove_writed_line(char *line)
{
	int		counter;
	int		counter_removed;
	char	*new_removed_file;

	counter = 0;
	while (line[counter] && line[counter] != '\n')
		counter++;
	if (!line[counter])
	{
		free(line);
		return (NULL);
	}
	new_removed_file = malloc(sizeof(char) * (ft_strlen(line) - counter + 1));
	if (!new_removed_file)
		return (NULL);
	counter++;
	counter_removed = 0;
	while (line[counter])
		new_removed_file[counter_removed++] = line[counter++];
	new_removed_file[counter_removed] = '\0';
	free(line);
	return (new_removed_file);
}

char	*ft_write_readed_line(char *line)
{
	int		counter;
	char	*new_writed_line;

	counter = 0;
	if (!line[counter])
		return (NULL);
	while (line[counter] != '\n' && line[counter] != '\0')
		counter++;
	new_writed_line = malloc(sizeof(char) * counter + 2);
	if (!new_writed_line)
		return (NULL);
	counter = 0;
	while (line[counter] && line[counter] != '\n')
	{
		new_writed_line[counter] = line[counter];
		counter++;
	}
	if (line[counter] == '\n')
	{
		new_writed_line[counter] = line[counter];
		counter++;
	}
	new_writed_line[counter] = '\0';
	return (new_writed_line);
}

char	*ft_read_line(int fd, char *line)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(line, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		line = ft_strjoin(line, buff);
	}
	free(buff);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*line[1000];
	char		*write_readed_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line[fd] = ft_read_line(fd, line[fd]);
	if (!line[fd])
		return (NULL);
	write_readed_line = ft_write_readed_line(line[fd]);
	line[fd] = ft_remove_writed_line(line[fd]);
	return (write_readed_line);
}

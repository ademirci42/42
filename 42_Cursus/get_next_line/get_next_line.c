#include "get_next_line.h"

char	*ft_indx_rd(int fd, char *indx)
{
	char	*buff;
	int		i;
	
	i = 1;
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	while (ft_not_newline(indx) && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if ( i == -1 || (!buff && i == 0))
		{
			free(buff);
			return (0);
		}
		buff[i] = '\0';
		indx = ft_join_indx(indx, buff);
		if (!indx)
			return (0);
	}
	free (buff);
	return (indx);
}

char	*get_next_line(int fd)
{
	static char	*indx;
	char		*left;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	indx = ft_indx_rd(fd, indx);
	if (!indx)
		return (0);
	left = ft_left_nextline(indx);
	indx = ft_right_nextline(indx);
	return (left);
}

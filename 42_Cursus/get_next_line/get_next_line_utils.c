#include "get_next_line.h"

int	ft_strlen(char *indx)
{
	int	i;

	if (!indx)
		return (0);
	i = 0;
	while (indx[i])
		i++;
	return (i);
}

int	ft_not_newline(char	*indx)
{
	int	i;

	i = 0;
	if (!indx)
		return (1);
	while (indx[i])
	{
		if (indx[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_join_indx(char *indx, char *buff)
{
	char	*new_indx;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if(!indx)
	{
		new_indx = malloc(sizeof(char) * ft_strlen(buff) + 1);
		if(!new_indx)
			return (0);
		while (buff[i])
		{
			new_indx[i] = buff[i];
			i++;
		}
	}
	else
	{
		new_indx = malloc(sizeof(char) * (ft_strlen(buff) + ft_strlen(indx) + 1));
		if (!new_indx)
			return (0);
		while (indx[i])
		{
			new_indx[i] = indx[i];
			i++;
		}
		while (buff[j])
			new_indx[i++] = buff[j++];
	}
	new_indx[i] = '\0';
	free (indx);
	return (new_indx);
}

char	*ft_left_nextline(char *indx)
{
	char	*left;
	int		i;
	int		j;

	i = 0;
	j = 0;

	if (!*indx)
		return (0);
	while (indx[i] && indx[i] != '\n')
		i++;
	left = malloc(sizeof(char) * (i + 2));
	if (!left)
		return (0);
	while (j <= i)
	{
		left[j] = indx[j];
		j++;
	}
	left[j] = '\0';
	return (left);
}

char	*ft_right_nextline(char *indx)
{
	char	*right;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (!*indx)
		return (0);
	while (indx[i] && indx[i] != '\n')
		i++;
	len = ft_strlen(&indx[i]);
	right = malloc(sizeof(char) * len);
	if (!right)
		return(0);
	while (indx[++i])
	{
		right[j] = indx[i];
		j++;
	}
	right[j] = '\0';
	free(indx);
	return (right);
}

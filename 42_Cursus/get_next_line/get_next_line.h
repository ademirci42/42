#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *indx);
int		ft_not_newline(char *indx);

char	*ft_join_indx(char *indx, char *buff);
char	*ft_left_nextline(char *indx);
char	*ft_right_nextline(char *indx);
char	*ft_indx_rd(int fd, char *indx);
char	*get_next_line(int fd);

#endif


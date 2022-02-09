#ifndef	LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>

int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isdigit(int);
int	ft_isascii(int);
int	ft_isprint(int);

size_t	ft_strlen(const char *a);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	*ft_memset(void *, int, size_t);
void	ft_bzero(void *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memmove(void *, const void *, size_t);

#endif

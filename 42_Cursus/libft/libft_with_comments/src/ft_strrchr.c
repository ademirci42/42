#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int l;

	l = ft_strlen(s);
	i = 0;
	
	while(s[l] != s[i] && c != s[l])
		l--;
	if (s[l] == s[i])
		return((char *)&s[l]);
	return(0);
}

int	main()
{
	char	a[] = "alper";
	int c;

	c = 'e';
	printf("%s", ft_strrchr(a,c));
}
	

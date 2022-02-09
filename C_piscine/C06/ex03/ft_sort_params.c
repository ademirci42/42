/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:12:01 by ademirci          #+#    #+#             */
/*   Updated: 2021/12/12 17:14:48 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		write(1, &str[b], 1);
		b++;
	}
}

int	main(int argc, char **argv)
{
	int		c;
	int		d;
	char	*e;

	c = 0;
	while (++c < argc - 1)
	{
		d = c;
		while (++d < argc)
		{
			if (ft_strcmp(argv[c], argv[d]) > 0)
			{
				e = argv[c];
				argv[c] = argv[d];
				argv[d] = e;
			}
		}
	}
	c = 0;
	while (++c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
	}
	return (0);
}

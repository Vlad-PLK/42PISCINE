/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:18:59 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 14:26:16 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strcmp(char *str, char *to_find, int b)
{
	int		c;

	c = 0;
	while ((str[b] != '\0') && (to_find[c] != '\0'))
	{
		if (str[b] != to_find[c])
			return (0);
		else
		{
			c++;
			b++;
		}
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		b;
	char 	*pointer;

	pointer = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			b = i;
			if (ft_strcmp(str, to_find, b))
				return (&str[i]);
		}
		i++;
	}
	return (pointer);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strstr(argv[1], argv[2]));
}

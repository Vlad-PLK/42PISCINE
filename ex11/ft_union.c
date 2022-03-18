/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:56:31 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 15:51:21 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_check(char *str, char c, int index)
{
	int	i;
	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		if (ft_check(s2, s2[i], i) == 1)
		{
			if (ft_check(s1, s2[i], j) == 1)
				write(1, &s2[i], 1);
		}	
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_union(argv[1], argv[2]);
}

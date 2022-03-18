/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:52:43 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 16:07:05 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		m;
	int		str0;

	i = 0;
	m = 0;
	str0 = 0;
	while (0 <= str[i] && str[i] <= 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			m++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		str0 = str0 * 10 + (str[i] - '0');
		i++;
	}
	if (!(m % 2 == 0))
		str0 = str0 * (-1);
	return (str0);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_atoi(argv[1]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:28:41 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 13:35:59 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int		i;
	
	i = 0;
	while (s1[i] != '\0')
	{	
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	printf("%d", ft_strcmp(argv[1], argv[2]));
}




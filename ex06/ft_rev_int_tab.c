/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:36:46 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 12:09:39 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int 	i;
	int		temp;

	i = 0;
	while (i < size/2)
	{
		temp = tab[size -1 -i];
		tab[size -1 -i] = tab[i];
		tab[i] = temp;
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[5];
	int size;
	size = 5;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_rev_int_tab(tab, size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:11:25 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 13:49:30 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
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
	int	tab[5];
	int	size;
	size = 5;

	tab[0] = 5;
	tab[1] = 1;
	tab[2] = 3;
	tab[3] = 6;
	tab[4] = 2;

	ft_sort_int_tab(tab, size);
}

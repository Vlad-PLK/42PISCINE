/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:57:22 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 11:16:33 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int *a;
	int *b;
	int	c;
	int d;

	a = &c;
	b = &d;

	c = 42;
	d = 84;

	printf("%d" "%d\n", c, d);
	ft_swap(a, b);
	printf("%d" "%d\n", c, d);
}

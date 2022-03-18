/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:19:43 by vpolojie          #+#    #+#             */
/*   Updated: 2022/02/17 10:45:55 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_abc(char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
}

void	ft_print_comb02(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{	
		b = a +1;
		while (b <= 99)
		{
			print_abc(a /10 + '0', a %10 + '0', b /10 + '0', b %10 + '0');
			if (!(a == 98 && b == 99))
				write(1, ",", 1);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb02();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ibba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:37:38 by ael-ibba          #+#    #+#             */
/*   Updated: 2023/07/27 17:39:24 by ael-ibba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	int	hal_1;
	int	hal_2;

	hal_1 = (a / 10) + 48;
	hal_2 = (a % 10) + 48;
	write(1, &hal_1, 1);
	write(1, &hal_2, 1);
	write(1, " ", 1);
	hal_1 = (b / 10) + 48;
	hal_2 = (b % 10) + 48;
	write(1, &hal_1, 1);
	write(1, &hal_2, 1);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}

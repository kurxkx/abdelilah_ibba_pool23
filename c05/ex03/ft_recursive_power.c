/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ibba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:37:09 by ael-ibba          #+#    #+#             */
/*   Updated: 2023/07/30 10:53:42 by ael-ibba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	s;

	s = nb;
	if (s > s * nb || power < 0)
		return (0);
	else if (power > 1)
		return (s * ft_recursive_power(s, power - 1));
	else if (power == 0)
		return (1);
	else
		return (s);
}

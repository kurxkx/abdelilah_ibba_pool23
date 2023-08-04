/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ibba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:27:04 by ael-ibba          #+#    #+#             */
/*   Updated: 2023/08/03 09:33:44 by ael-ibba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*nbr;

	i = 0;
	if (min >= max)
		return (NULL);
	nbr = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (nbr);
}
/*int main(void)
{
	int	i;
	int *r;

	i = 0;
	r = ft_range(0, 9);
	while (i < 0 + 9)
	{
		printf("%d", r[i++]);
	}
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ibba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:41:21 by ael-ibba          #+#    #+#             */
/*   Updated: 2023/08/03 09:37:01 by ael-ibba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nbr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr = malloc(sizeof(int) * (max - min));
	if (nbr == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	*range = nbr;
	return (i);
}

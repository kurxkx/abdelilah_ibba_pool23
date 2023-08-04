/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ibba <ael-ibba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:09:02 by ael-ibba          #+#    #+#             */
/*   Updated: 2023/08/03 14:33:03 by ael-ibba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A')
		|| (c > 'Z' && c < 'a') || c > 'z')
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

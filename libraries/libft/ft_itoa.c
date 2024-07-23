/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:56:23 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:56:31 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*array_isr(char *c, unsigned int nbr, size_t len)
{
	while (nbr > 0)
	{
		c[len--] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (c);
}

static size_t	length_size(long i)
{
	int	length;

	length = 0;
	if (i <= 0)
		length = 1;
	while (i != 0)
	{
		length++;
		i = i / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int				sinal;
	unsigned int	nbr;
	char			*c;
	size_t			len;

	sinal = 1;
	len = length_size(n);
	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!(c))
		return (NULL);
	c[len--] = '\0';
	if (n == 0)
		c[0] = '0';
	if (n < 0)
	{
		sinal *= -1;
		nbr = n * -1;
		c[0] = '-';
	}
	else
		nbr = n;
	c = array_isr(c, nbr, len);
	return (c);
}

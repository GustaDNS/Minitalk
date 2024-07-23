/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:46 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:57:49 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}

/* int	main()
{
	char str[50] = "Gustavo This is memset";
	puts(str);
	ft_memset(str, '-', 7);
	puts(str);
	return(0);
} */
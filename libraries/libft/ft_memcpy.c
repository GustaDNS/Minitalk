/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:13 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:57:19 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*memsrc;
	unsigned char		*memdest;

	i = 0;
	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}
/* int	main()
{
	char src[50] = "Gustavo Daniel";
	char dest[50];
	
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
 */
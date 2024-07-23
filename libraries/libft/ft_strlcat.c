/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:59:24 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/25 17:44:14 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	res;

	j = 0;
	i = 0;
	if (!size && (!dst || !src))
		return (0);
	if (size == 0)
		return ((size_t)ft_strlen(src));
	res = (size_t)ft_strlen(dst) + (size_t)ft_strlen(src);
	if (size < (size_t)ft_strlen(dst))
		return ((size_t) ft_strlen(src) + size);
	while (dst[i])
		i++;
	while (src[j] != '\0' && ((size_t)i < size - 1))
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (res);
}
/* int	main()
{
	char dest[100] = "Gustavo";
	char src[100] = " Daniel";
	printf("%lu\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
	return (0);
} */
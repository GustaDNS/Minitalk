/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:56:48 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:56:53 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char str[] = "Hello World";
	char *ptr;
	ptr = memchr(str, 'W', 7);
	printf("%s\n", ptr);
	ptr = ft_memchr(str, 'W', 7);
	printf("%s\n", ptr);
	return (0);
}*/

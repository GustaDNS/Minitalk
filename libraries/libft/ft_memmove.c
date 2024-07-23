/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:26 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:57:31 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*memsrc;
	unsigned char		*memdest;

	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (memsrc == memdest || n == 0)
		return (dest);
	if (memdest < memsrc || memdest >= (memsrc + n))
	{
		while (n--)
			*memdest++ = *memsrc++;
	}
	else
	{
		memdest += n - 1;
		memsrc += n - 1;
		while (n--)
			*memdest-- = *memsrc--;
	}
	return (dest);
}
/* int	main()
{
	char str1[] = "Gustavo";
	char str2[] = "Siqueira";
	ft_memmove(str1 + 2, str2, 3);
	printf("%s\n", str1);
	memmove(str1 + 2, str2, 3);
	printf("%s", str1);
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:49 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:58:51 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	mem = (char *)malloc((i + 1) * sizeof(char));
	if (!mem)
		return (0);
	while (j < i)
	{
		mem[j] = s[j];
		j++;
	}
	mem[j] = '\0';
	return (mem);
}
/* int       main(void)
{
    char    *str;
    char    *allocated;

    str = "Hello World with malloc()";
    printf("original  : base  : $%s$ @ %p\n", str, str);
    allocated = strdup(str);
    printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
    allocated = ft_strdup(str);
    printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
} */
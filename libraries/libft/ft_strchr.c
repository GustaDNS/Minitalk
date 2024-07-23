/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:42 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:58:45 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int r)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = 0;
	while ((unsigned char)str[i] != (unsigned char)r)
	{
		if (!str[i])
			return (0);
		i++;
		p++;
	}
	return (p);
}
/* int	main()
{
	char *s = "Gustavo";
	char c = 'u';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return(0);
} */
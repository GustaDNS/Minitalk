/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:59:46 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:59:49 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
/* int	main()
{
	char str1[15] = "Gustavo";
	char str2[15] = "Gustavo";
	int ret;

	ret = ft_strncmp(str1, str2, 5);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return(0);
} */
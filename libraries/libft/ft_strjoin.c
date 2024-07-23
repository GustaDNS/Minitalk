/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:59:09 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:59:18 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(count_len(s1) + count_len(s2) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		res[i + k] = s2[k];
		k++;
	}
	res[i + k] = '\0';
	return (res);
}
/* int main(void)
{
   char	*s1 = "my favorite animal is";
	char	*s2 = "|||";
	char	*s3 = "the nyancat";
	char	*res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("%s\n", res);
} */
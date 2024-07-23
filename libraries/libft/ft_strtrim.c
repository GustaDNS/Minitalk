/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:00:08 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/25 14:10:20 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	count;
	size_t	i;
	char	*dup_str;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[count] && count < n)
		count++;
	dup_str = (char *)malloc((count + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	while (s[i] && i < n)
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sub_str;
	size_t	end_char;
	size_t	start_char;

	if (!s1 || !set)
		return (NULL);
	start_char = 0;
	end_char = ft_strlen(s1);
	while (s1[start_char] && ft_strchr(set, s1[start_char]))
		start_char++;
	while (start_char < end_char && ft_strchr(set, s1[end_char]))
		end_char--;
	if (start_char > end_char)
		return (NULL);
	sub_str = ft_strndup(s1 + start_char, (end_char - start_char) + 1);
	if (!sub_str)
		return (NULL);
	return (sub_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:10 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/22 19:57:37 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/* int	main()
{
	char *str;
	str = (char *) ft_calloc(-15, 15);
	strcpy(str, "Gustavo");
	printf("String: %s, Address: %p\n", str, str);
	str = (char *) ft_calloc(15, sizeof(char));
	strcpy(str, "Gustavo");
	printf("String: %s, Address: %p\n", str, str);
	return (0);
} */
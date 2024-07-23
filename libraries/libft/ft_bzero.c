/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:57 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:55:02 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t x)
{
	ft_memset(ptr, 0, x);
}
/* int	main() {
	char str[50] = "Gustavo This is memset";
	puts(str);
	ft_bzero(str, 7);
	puts(str);
	return(0);
} */
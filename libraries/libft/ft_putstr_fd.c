/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:58:14 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/22 19:57:05 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0' && ft_isascii(s[i]))
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/* int	main()
{
	ft_putstr_fd("Gustavo", 1);
	return(0);
} */
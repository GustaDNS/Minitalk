/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:26 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:55:31 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (2);
	return (0);
}
/* int	main()
{
	printf("%d\n", ft_isalpha('j'));
    printf("%d\n", isalpha('j'));
    printf("%d\n", ft_isalpha('Z'));
    printf("%d", isalpha('Z'));
    return(0);

} */
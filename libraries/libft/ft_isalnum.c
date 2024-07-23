/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:18 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/09 13:55:22 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*int   main()
{
	printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('0'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d\n", isalnum('a'));
    printf("%d\n", isalnum('A'));
    printf("%d\n", isalnum('0'));
    printf("%d\n", isalnum('9'));
	return(0);
} */
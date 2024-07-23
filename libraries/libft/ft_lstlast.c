/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:53:19 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/25 17:36:18 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/* int main(int ac, char **av)
{
    (void)ac;
    int i = 2;
    t_list *root = ft_lstnew(av[1]);
    while (av[i])
    {
        root->next = ft_lstnew(av[i]);
        i++;
    }
    t_list *last = ft_lstlast(root);
    printf("%s\n", (char *)last->content);
    return (0);
} */
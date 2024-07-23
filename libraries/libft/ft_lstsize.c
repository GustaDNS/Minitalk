/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:45:20 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/25 17:36:11 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* int main(void)
{
    t_list *lst;
    lst = (t_list *)malloc(sizeof(t_list));
    lst->content = ft_strdup("hello ");
    lst->next = ft_lstnew(ft_strdup("world"));
    lst->next->next = ft_lstnew(ft_strdup(" mannn"));
    int i = ft_lstsize(lst);
    printf("%d\n", i);
    while (lst)
    {
        printf("%s", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
} */
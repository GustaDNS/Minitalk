/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:12:47 by gudaniel          #+#    #+#             */
/*   Updated: 2024/04/27 15:48:45 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*obj;
	void	*set;

	if (!lst || !del || !f)
		return (NULL);
	list = NULL;
	obj = NULL;
	while (lst)
	{
		set = f(lst->content);
		obj = ft_lstnew(set);
		if (!obj)
		{
			del(set);
			ft_lstclear(&list, (*del));
			return (list);
		}
		ft_lstadd_back(&list, obj);
		lst = lst->next;
	}
	return (list);
}

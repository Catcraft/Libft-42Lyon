/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:32:21 by ninieddu          #+#    #+#             */
/*   Updated: 2021/04/13 15:19:16 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*new;

	if (lst && f)
	{
		nlst = ft_lstnew(f(lst->content));
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (new == NULL)
				ft_lstclear(&nlst, del);
			ft_lstadd_back(&nlst, new);
			lst = lst->next;
		}
		return (nlst);
	}
	return (NULL);
}

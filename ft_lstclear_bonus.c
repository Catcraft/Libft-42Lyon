/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:31:18 by ninieddu          #+#    #+#             */
/*   Updated: 2021/05/05 17:37:38 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;

	nlst = *lst;
	while (nlst->next)
	{
		del(nlst);
		nlst = nlst->next;
		free(nlst);
	}
	del(nlst->next);
	free(nlst->next);
	*lst = NULL;
}

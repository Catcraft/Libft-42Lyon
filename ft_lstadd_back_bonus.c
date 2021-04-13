/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:29:26 by ninieddu          #+#    #+#             */
/*   Updated: 2021/04/13 15:18:18 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (alst && !*alst)
	{
		*alst = new;
		return ;
	}
	if (new && alst && *alst)
	{
		list = *alst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
}

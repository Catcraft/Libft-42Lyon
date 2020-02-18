/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ninieddu <ninieddu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/05 18:29:26 by ninieddu     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 19:15:05 by ninieddu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *list;

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

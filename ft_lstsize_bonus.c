/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ninieddu <ninieddu@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/05 18:23:50 by ninieddu     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/20 16:47:31 by ninieddu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (lst)
	{
		i = 1;
		while (lst->next)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}
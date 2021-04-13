/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:40:11 by ninieddu          #+#    #+#             */
/*   Updated: 2021/04/13 15:24:29 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	i = 0;
	if (s && f)
	{
		nstr = ft_calloc(sizeof(char), (ft_strlen(s) + 1));
		if (nstr == NULL)
			return (NULL);
		while (s[i])
		{
			nstr[i] = f(i, s[i]);
			i++;
		}
		return (nstr);
	}
	return (NULL);
}

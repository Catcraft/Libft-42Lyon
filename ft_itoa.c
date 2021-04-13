/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:39:27 by ninieddu          #+#    #+#             */
/*   Updated: 2021/04/13 15:17:42 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_intlen(int n, int *len)
{
	while (n > 10)
	{
		n / 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	len = 1;
	neg = 0;
	if (n < 0)
	{
		neg++;
		n = -n;
	}
	ft_intlen(n, &len);
	len += neg;
	str = ft_calloc(sizeof(char), len + 1);
	if (str == NULL)
		return (NULL);
	while (len--)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

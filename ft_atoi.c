/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:14:17 by ninieddu          #+#    #+#             */
/*   Updated: 2021/04/13 15:13:33 by ninieddu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	big;
	int		nbr;
	char	sign;

	big = 0;
	sign = '+';
	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = *str;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		big = big * 10 + (*str - 48);
		str++;
	}
	nbr = big;
	if (sign == '-')
		return (-nbr);
	return (nbr);
}

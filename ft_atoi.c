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
	long long big;
	int nbr;
	char sign;
	int index = 0;
	big = 0;
	sign = '+';
	while ((str[index] < 14 && str[index] > 8) || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign = str[index];
		}
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
	if (big > 2147483647)
		    return (sign == '-' ? -2147483648 : 2147483647);
		big = big * 10 + (str[index] - 48);
		index++;
	}
	if (big > 2147483647)
		return (sign == '-' ? -2147483648 : 2147483647);
	nbr = big;
	if (sign == '-')
		return (-nbr);
	return (nbr);
}

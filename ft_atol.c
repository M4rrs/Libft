/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:36:56 by nnorazma          #+#    #+#             */
/*   Updated: 2022/06/21 13:40:54 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long ft_atol(char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\n' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:15:54 by rmallawa          #+#    #+#             */
/*   Updated: 2022/09/20 14:16:28 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' ||
		*(str + i) == '\t' ||
		*(str + i) == '\r' ||
		*(str + i) == '\v' ||
		*(str + i) == '\f' ||
		*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - '0');
	return (num * sign);
}

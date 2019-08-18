/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:36:42 by bscussel          #+#    #+#             */
/*   Updated: 2019/08/13 16:03:48 by bscussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		is_valid(char c, int base)
{
	char valid1[17] = "0123456789ABCDEF";
	char valid2[17] = "0123456789abcdef";

	if (c == 'x')
		return (1);
	while (base--)
	{
		if (valid1[base] == c || valid2[base] == c)
			return (1);
	}
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		result;
	int		sign;

	result = 0;
	sign = (*str == '-') ? -1 : 1;
	while (*str <= 32)
		str++;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (is_valid(*str, str_base))
		result = result * str_base + value_of(*str++);
	return (result * sign);
}

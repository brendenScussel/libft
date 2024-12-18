/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:09:33 by bscussel          #+#    #+#             */
/*   Updated: 2019/05/02 18:33:57 by bscussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
/*
void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	write(1, s, i);
}
*/
void		ft_putstr(char const *s)
{
	char	*cpy;

	cpy = (char*)s;
	while (*cpy)
		write(1, cpy++, 1);
}

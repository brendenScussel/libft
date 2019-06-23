/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_prg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:52:30 by bscussel          #+#    #+#             */
/*   Updated: 2019/06/13 14:05:19 by bscussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** exit program with customizable status output.
** similar to "stdlib/abort.c"
*/

#include "./libft.h"

void	end_prg(char *str)
{
	ft_putstr("\n_______________\n");
	ft_putstr(str);
	ft_putstr("\n_______________\n");
	exit(1);
}

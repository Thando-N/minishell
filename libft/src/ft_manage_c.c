/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_manage_c(char *flags, char c)
{
	int	l_justfy;
	int	width;
	int	total;

	l_justfy = ft_flags('-', flags);
	width = ft_find_width(flags);
	total = 0;
	if (l_justfy)
	{
		ft_putchar(c);
		ft_manage_width(width - 1);
		total += width + 1;
	}
	else
	{
		ft_manage_width(width - 1);
		ft_putchar(c);
		total += width + 1;
	}
	return (total - 2);
}

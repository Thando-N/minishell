/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_prec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_prec(char *flags)
{
	int	prec;

	prec = 0;
	while (*flags)
	{
		if (*flags == '.')
			prec = ft_atoi(flags + 1);
		flags++;
	}
	return (prec);
}

void		ft_handle_prec(char *flags, int digits)
{
	int	prec;
	int	i;
	int	total;

	prec = 0;
	total = 0;
	i = 0;
	if (ft_flags('.', flags))
	{
		prec = ft_prec(flags);
		total = prec - digits;
		while (i < total)
		{
			ft_putchar('0');
			i++;
		}
	}
}

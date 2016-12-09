/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_find_width(char *flags)
{
	int	width;
	int	found;

	width = 0;
	found = 0;
	while (*flags != '.' && found == 0)
	{
		if (*flags >= 48 && *flags <= 57)
		{
			width = ft_atoi(flags);
			found = 1;
		}
		flags++;
	}
	return (width);
}

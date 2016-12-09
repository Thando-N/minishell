/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getchar(const int fd)
{
	static char	buff[GET_C_BUFF_SIZE];
	static char	*chr;
	static int	pos = 0;
	static int	ret = 0;

	if (pos >= ret)
	{
		if ((ret = read(fd, buff, GET_C_BUFF_SIZE)) > 0)
		{
			chr = buff;
			pos = 0;
			return (*(chr + pos++));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (*(chr + pos++));
	}
}

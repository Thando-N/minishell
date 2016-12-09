/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:09:03 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*str;

	ch = (char)c;
	str = NULL;
	if (ch == '\0')
		return ((char *)str);
	while (*s)
	{
		if (*s == '\0')
			return (0);
		else if (*s == ch)
			str = s;
		s++;
	}
	s = str;
	return (char *)s;
}

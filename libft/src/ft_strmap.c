/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:09:02 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:13 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = -1;
	str = ft_memalloc(ft_strlen(s));
	if (str)
	{
		while (s[++i])
		{
			str[i] = f(s[i]);
		}
		str[i] = '\0';
	}
	return (str);
}

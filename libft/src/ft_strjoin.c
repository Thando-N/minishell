/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:09:01 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:12 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join)
	{
		ft_strcpy(join, s1);
		ft_strcat(join, s2);
	}
	return (join);
}

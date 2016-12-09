/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:09:03 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:14 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s_trim;
	size_t	ini;
	size_t	end;
	int		i;

	ini = 0;
	i = 0;
	end = ft_strlen(s);
	s_trim = ft_memalloc(end);
	if (s_trim)
	{
		while ((s[ini] == 32 || s[ini] == '\n' || s[ini] == '\t') && s[ini])
			ini++;
		end -= 1;
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			--end;
		while (ini <= end)
			s_trim[i++] = s[ini++];
		s_trim[ini] = '\0';
	}
	return (s_trim);
}

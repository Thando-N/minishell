/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char		*n_src;
	unsigned char			*n_dest;
	size_t					i;

	i = 0;
	n_src = (unsigned char *)src;
	n_dest = (unsigned char *)dst;
	while (i < n)
	{
		if (*n_src == c)
			return (n_dest + 1);
		*n_dest++ = *n_src++;
		i++;
	}
	return (NULL);
}

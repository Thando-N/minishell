/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:11 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_num_digits(const int n)
{
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0)
		return (ft_strlen(ft_itoa(n)));
	return (1 + ft_num_digits(n / 10));
}

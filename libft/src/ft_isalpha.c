/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:08:50 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:09:10 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (!((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)))
		return (0);
	return (1);
}

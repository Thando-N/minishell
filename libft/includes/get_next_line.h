/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:06:37 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:06:39 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include "libft.h"
int get_next_line(const int fd, char **line);
int	ft_getchar(const int fd);
#ifndef GET_C_BUFF_SIZE
#define GET_C_BUFF_SIZE 1023
#endif
# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif
#endif

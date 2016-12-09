/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:12:14 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:12:20 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**getpath(char **envp)
{
	int		i;
	char	**s1;
	char	**s2;

	i = 0;
	while (envp[i])
	{
		s1 = ft_strsplit(envp[i], '=');
		if (ft_strequ(s1[0], "PATH"))
		{
			s2 = ft_strsplit(s1[1], ':');
			return (s2);
		}
		i++;
	}
	return (NULL);
}

char	*ft_more(char **envp, char **split)
{
	char	**new;
	char	*str;
	int		i;

	i = 0;
	new = getpath(envp);
	while (new[i] != '\0')
	{
		str = ft_strjoin(new[i], "/");
		str = ft_strjoin(str, split[0]);
		if (access(str, F_OK) == 0)
			return (str);
		i++;
	}
	ft_strdel(&str);
	return (NULL);
}

void	ft_execute(char **envp, char **sp)
{
	pid_t	pid;

	pid = fork();
	if (pid == 0)
		execve(ft_more(envp, sp), &sp[0], envp);
	if (pid > 0)
		wait(NULL);
}

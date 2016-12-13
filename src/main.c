/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 18:12:14 by thandung          #+#    #+#             */
/*   Updated: 2016/12/13 14:53:54 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		ft_search_command(char *command)
{
	static char	*comm_list = "echo pwd cd setenv unsetenv env exit clear";
	char		**comm_split;

	comm_split = ft_strsplit(comm_list, ' ');
	while (*comm_split)
	{
		if (ft_strcmp(*comm_split, command) == 0)
			return (1);
		comm_split++;
	}
	return (0);
}

void	ft_execute_commands(char **command, char *get_line, char **envp)
{
	if (ft_strequ(command[0], "cd"))
		ft_cd(command, envp);
	else if (ft_strequ(command[0], "pwd"))
		ft_putendl(ft_pwd());
	else if (ft_strequ(command[0], "echo"))
		ft_echo(get_line, envp);
	else if (ft_strequ(command[0], "env"))
		ft_print_env(envp);
	else if (ft_strequ(command[0], "setenv"))
		ft_set_envir(envp, get_line);
	else if (ft_strequ(command[0], "unsetenv"))
		ft_unsetting_env(get_line, envp);
	else if (ft_strequ(command[0], "clear"))
		write(1, "\033c", 3);
	else if (access(command[0],X_OK) == 0)
		ft_execute(envp, command);

}

void	ft_run_commands(char **user_comm, char *get_line, char **envp)
{
	pid_t	pid;
	char	**sp;

	sp = ft_strsplit(get_line, ' ');
	user_comm = ft_check_env(user_comm, envp);
	if (ft_search_command(user_comm[0]) || (access(user_comm[0], X_OK) == 0))
	{
		if ((pid = fork()) < 0)
			ft_putendl("error while forking");
		else if (pid == 0)
			ft_execute_commands(user_comm, get_line, envp);
		if (pid > 0)
		{
			wait(NULL);
			exit(0);
		}
	}
	else if (ft_more(envp, sp))
		ft_execute(envp, sp);
	else
	{
		ft_putstr("minishell: ");
		ft_putstr(user_comm[0]);
		ft_putstr(": command not found...\n");
	}
}

void	prompt(char **commands)
{
	ft_putstr(GRN);
	ft_putstr("$> ");
	ft_putstr(RESET);
	get_next_line(0, commands);
}

int		main(int ac, char **av, char **envp)
{
	char	*get_line;
	char	**user_comm;

	get_line = NULL;
	get_line = getcwd(get_line, 1024);
	get_line = ft_strcat(get_line, "/");
	get_line = ft_strcat(get_line, av[0]);
	ft_setenv("SHELL", get_line, 1, envp);
	get_line = NULL;
	signal(SIGINT, ft_ctrl_c_signal_handler);
	(void)ac;
	(void)av;
	while (1)
	{
		prompt(&get_line);
		if (!ft_strequ(get_line, ""))
		{
			user_comm = ft_strsplit(get_line, ' ');
			if (ft_strequ(user_comm[0], "exit"))
				exit(0);
			ft_run_commands(user_comm, get_line, envp);
		}
	}
	return (0);
}

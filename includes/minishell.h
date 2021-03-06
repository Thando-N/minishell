/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 17:51:15 by thandung          #+#    #+#             */
/*   Updated: 2016/07/10 18:11:25 by thandung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft.h"
# include <signal.h>
# include <sys/wait.h>
# define RED   "\x1B[31m"		
# define GRN   "\x1B[32m"		
# define YEL   "\x1B[33m"		
# define BLU   "\x1B[34m"		
# define MAG   "\x1B[35m"		
# define CYN   "\x1B[36m"		
# define WHT   "\x1B[37m"		
# define RESET "\x1B[0m"

void	ft_cd(char **dir, char **envp);
char	*ft_pwd();
void	ft_echo(char *av, char **envp);
int		ft_end_with(char *str, char c);
int		ft_start_with(char *str, char c);
char	*ft_first_word(const char *s);
char	*ft_last_word(const char *s);
char	*ft_get_env(const char *env, char **env_list);
void	ft_ctrl_c_signal_handler(int signum);
void	ft_print_env(char **envp);
char	**ft_check_env(char **cmd, char **envp);
int		ft_array_len(char **arr);
int		ft_unsetenv(const char *env, char **envp);
int		ft_setenv(const char *env, const char *val, int ovride, char **envp);
void	ft_set_envir(char **envp, char *str);
char	*ft_remove_qoutes(char	*s);
char	*ft_rm_quotes(char *s);
void	ft_print_env(char **envp);
char	**ft_check_env(char **cmd, char **envp);
void	ft_unsetting_env(char *names, char	**envp);
char	*ft_more(char **envp, char **split);
void	ft_execute(char **envp, char **sp);

#endif

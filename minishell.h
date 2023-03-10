/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:15:09 by rmallawa          #+#    #+#             */
/*   Updated: 2022/10/03 14:27:46 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#ifndef MINISHELL_H
# define MINISHELL_H
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <dirent.h>
# include "libft.h"

# define IS_QUOTE(x) (x == '"' || x == '\'')

char					**g_envv;

/*
** src/cd_builtin.c
*/
void					change_dir(char *path, int print_path);
int						cd_builtin(char **command);

/*
** src/display_prompt_msg.c
*/
void					exit_shell(void);
char					*parse_home_path(char *path, int reverse_parse);
void					display_prompt_msg(void);

/*
** src/echo_builtin.c
*/
int						echo_builtin(char **command);

/*
** src/exec_command.c
*/
int						exec_command(char **command);

/*
** src/setenv_builtin.c
*/
int						find_env_var(char *var);
char					*get_env_var(char *var);
char					**realloc_envv(int new_size);
void					set_env_var(char *key, char *value);
int						setenv_builtin(char **command);
int						setenv_builtin(char **args);

/*
** src/signal_handler.c
*/
void					signal_handler(int signo);
void					proc_signal_handler(int signo);

/*
** src/unsetenv_builtin.c
*/
void					print_env(void);
void					init_envv(int ac, char **av, char **envv);
int						unsetenv_builtin(char **command);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:37:58 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/12/04 12:05:48 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_file(char *file, int proc)
{
	int	ret;

	if (proc == 0)
		ret = open(file, O_RDONLY, 0777);
	if (proc == 1)
		ret = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (proc == -1)
		exit(0);
	return (ret);
}

void	exit_handler(int x)
{
	if (x == 1)
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
	exit(0);
}

void	free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	*get_env(char *name, char **env)
{
	int		i;
	int		j;
	char	*sub;
	
	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if (ft_strcmp(sub, name) == 0)
		{
			free(sub);
			return (env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

char	*get_path(char *cmd, char **env)
{
	int		i;
	char	*exec;
	char	*path;
	char	**all_path;
	char	**s_cmd;

	i = 0;
	all_path = ft_split(get_env("PATH", env), ':');
	s_cmd = ft_split(cmd, ' ');
	while (all_path[i])
	{
		path = ft_strjoin(all_path[i++], "/");
		exec = ft_strjoin(path, s_cmd[0]);
		free(path);
		if (access(exec, F_OK | X_OK) == 0)
		{
			free_tab(s_cmd);
			return (exec);
		}
		free(exec);
	}
	free_tab(s_cmd);
	free_tab(all_path);
	return (cmd);
}

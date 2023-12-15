#ifndef PIPEX_H
# define PIPEX_H

/* libft */
# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>  
# include <stdlib.h>

/* Funcs */
char	*get_path(char *cmd, char **env);
char	*get_env(char *name, char **env);
void	free_tab(char **tab);
void	exit_handler(int x);
int		open_file(char *file, int proc);
void	exec(char *cmd, char **env);
int		ft_strcmp(char *s1, char *s2);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:14:56 by samyilma          #+#    #+#             */
/*   Updated: 2024/01/27 16:02:58 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "libft/libft.h"

void	init_sig(int sig, void (*handler)(int, siginfo_t *, void *));

#endif
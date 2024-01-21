/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samyilma <samyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:14:52 by samyilma          #+#    #+#             */
/*   Updated: 2024/01/21 15:44:29 by samyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int bit_control;

void	sig_handler(int signum, siginfo_t *info, void *context)
{
	static	int	i;
	(void*)info;
	(void*)context;

	i = 0;
	if (signum == SIGUSR2)
		i++;
	else if (signum == SIGUSR1)
	{
		//printing number of bytes
	}
}

int	char_to_bin(char c, int pid)
{
	int	bit_index;
	int	itr;

	bit_index = 7;
	while (bit_index >= 0)
	{
		itr = 0;
		if ((c >> bit_index) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2)
		while ()
		{
			/* code */
		}
		bit_index--;
	}
}

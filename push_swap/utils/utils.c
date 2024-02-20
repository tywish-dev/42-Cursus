/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:29:13 by sametyilmaz       #+#    #+#             */
/*   Updated: 2024/02/20 17:29:13 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void	ft_err(int *stack)
{
	free(stack);
	write(2, "Error\n", 6);
	exit (1);
}

int	ft_qsatoi(char *str, int *stack, unsigned int i, int sign)
{
	unsigned long int	num;

	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		ft_err(stack);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_err(stack);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && sign == -1) || (num > 2147483647 && sign == 1))
		ft_err(stack);
	return (num * sign);
}

int	ft_stacklen(char **av, int i)
{
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

int	ft_checks(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_checkdup(int *stack, int size, int i, int j)
{
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_err(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:30:20 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 14:12:00 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizea == 0 || stack->sizea == 1)
		return ;
	i = stack->sizea - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizeb == 0 || stack->sizeb == 1)
		return ;
	i = stack->sizeb - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizea == 0 || stack->sizea == 1
		|| (stack->sizeb == 0 || stack->sizeb == 1))
		return ;
	i = stack->sizea - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	i = stack->sizeb - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	ft_printf("rrr\n");
}

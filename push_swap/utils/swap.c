/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:30:12 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 13:37:21 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack *stack)
{
	int	tmp;

	if (stack->sizea == 0 || stack->sizea == 1)
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_stack *stack)
{
	int	tmp;

	if (stack->sizeb == 0 || stack->sizeb == 1)
		return ;
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_stack *stack)
{
	int	tmp;

	if (stack->sizea == 0 || stack->sizea == 1
		|| (stack->sizeb == 0 || stack->sizeb == 1))
		return ;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_printf("ss\n");
}

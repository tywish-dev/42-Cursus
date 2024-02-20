/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:30:15 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 14:13:45 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizea == 0 || stack->sizea == 1)
		return ;
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->sizea)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizeb == 0 || stack->sizeb == 1)
		return ;
	i = 0;
	tmp = stack->b[i];
	while (++i < stack->sizeb)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->sizea == 0 || stack->sizea == 1
		|| (stack->sizeb == 0 || stack->sizeb == 1))
		return ;
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->sizea)
		stack->a[i - 1] = stack->a[i];
	stack->a[i - 1] = tmp;
	i = 0;
	tmp = stack->b[i];
	while (++i < stack->sizeb)
		stack->b[i - 1] = stack->b[i];
	stack->b[i - 1] = tmp;
	ft_printf("rr\n");
}

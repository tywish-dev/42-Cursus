/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:30:01 by faata             #+#    #+#             */
/*   Updated: 2024/02/20 14:58:52 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_stacklen(av, 0);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.sizea = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.sizeb = 0;
	while (++i < size)
		stack.a[i] = ft_qsatoi(av[i], stack.a, 0, 1);
	ft_checkdup(stack.a, size, 0, 1);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int	main(int argc, char **av)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		av++;
		if (argc == 2)
		{
			av = ft_split(*av, ' ');
			if (!*av)
				return (write(2, "Error\n", 6));
		}
		ft_push_swap(av);
		while (av[i])
		{
			ft_printf("%d ", &av[i++]);
		}
		return (0);
	}
	return (0);
}

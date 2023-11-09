/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:21 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/10/24 08:41:37 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned int val)
{
	int	len;

	len = 0;
	while (val)
	{
		len++;
		val /= 16;
	}
	return (len);
}

static void	ft_puthex(unsigned int val, char format)
{
	if (val >= 16)
	{
		ft_puthex(val / 16, format);
		ft_puthex(val % 16, format);
	}
	else
	{
		if (format == 'x')
			ft_putchar_fd((val - 10 + 'a'), 1);
		else if (format == 'X')
			ft_putchar_fd((val - 10 + 'A'), 1);
	}
}

int	ft_print_hex(unsigned int val, char format)
{
	if (val == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_puthex(val, format);
	return (ft_hexlen(val));
}

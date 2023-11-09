/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:30:40 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/10/23 12:41:08 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	if (num)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	len;

	write(1, "0x", 2);
	len = 2;
	if (ptr == 0)
	{
		len++;
		write(1, "0", 1);
	}
	else
	{
		ft_putptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}

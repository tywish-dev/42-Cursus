/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:29:47 by sametyilmaz       #+#    #+#             */
/*   Updated: 2024/02/20 17:29:47 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if (str == NULL)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check(char c)
{
	if (c == 'c' || c == 'd' || c == 'i' || c == 'p' || c == 'x' || c == 'X'
		|| c == 's' || c == 'u' || c == '%')
		return (1);
	return (0);
}

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] && (i++, 1))
		;
	return (i);
}

int	ft_putnbr(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
		len += ft_putchar(48 + n);
	return (len);
}

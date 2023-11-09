/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:37:07 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/10/26 13:52:50 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_length += ft_print_string(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_pointer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_print_int(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_print_percent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		printed_len;

	i = 0;
	printed_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed_len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			printed_len += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (printed_len);
}

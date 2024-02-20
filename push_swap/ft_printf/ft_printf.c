/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:46:29 by faata             #+#    #+#             */
/*   Updated: 2023/10/23 13:28:46 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char c)
{
	char	*base;
	int		len;

	len = 0;
	if (c == 'x' || c == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n / 16)
	{
		len += ft_putnbr_base(n / 16, c);
		len += ft_putnbr_base(n % 16, c);
	}
	else
		len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_format(va_list arg, char format, int len)
{
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_putnbr(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_putnbr_base(va_arg(arg, unsigned int), format);
	else if ((format == 'p') && (ft_putstr("0x"), (len++, len++), 1))
		len += ft_putnbr_base(va_arg(arg, unsigned long), format);
	else if (format == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && ft_check(*(format + 1)))
		{
			format++;
			len += ft_format(arg, *format, 0);
			format++;
		}
		else if (*format == '%' && ft_check(*(format + 1)) == 0)
			return (len);
		else
			(void)(write(1, format, 1), (len++, format++, 1));
	}
	return (va_end(arg), len);
}

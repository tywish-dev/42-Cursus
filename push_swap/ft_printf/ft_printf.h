/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:55:22 by faata             #+#    #+#             */
/*   Updated: 2023/10/23 17:36:03 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_putnbr_base(unsigned long n, char c);
int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_check(char c);
size_t	ft_strlen(const char	*s);
int		ft_putnbr(long n);
#endif
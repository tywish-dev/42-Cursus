/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sametyilmaz <sametyilmaz@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:44:24 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/10/18 14:26:33 by sametyilmaz      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *input, ...);

int ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_int(int n);
int	ft_print_uint(unsigned int n);

#endif
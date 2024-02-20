/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:23:03 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 13:25:48 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		f(index, s + index);
		index++;
	}
}

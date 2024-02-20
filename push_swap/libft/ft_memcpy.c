/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:18 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 13:24:06 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t	i;

	i = n;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest - i);
}

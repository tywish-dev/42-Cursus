/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:36 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 13:24:11 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	if ((unsigned char *)dst == (unsigned char *)src)
		return (dst);
	if ((unsigned char *)src < (unsigned char *)dst)
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}

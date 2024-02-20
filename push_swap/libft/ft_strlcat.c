/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faata <faata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:23:25 by faata             #+#    #+#             */
/*   Updated: 2024/01/30 13:26:00 by faata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	b;

	b = ft_strlen(dst) + ft_strlen(src);
	if (sz <= ft_strlen(dst))
		return (sz + ft_strlen(src));
	ft_strlcpy (dst + ft_strlen(dst), src, sz - ft_strlen(dst));
	return (b);
}

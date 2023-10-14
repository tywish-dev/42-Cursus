/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samyilma <samyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:22:02 by sametyilmaz       #+#    #+#             */
/*   Updated: 2023/10/14 14:30:51 by samyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		len;

	len = ft_strlen(s);
	a = c;
	while (len > 0 && s[len] != a)
		len--;
	if (s[len] == a)
		return ((char *)(s + len));
	return (NULL);
}

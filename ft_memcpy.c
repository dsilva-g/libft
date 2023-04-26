/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:44:07 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/26 08:06:15 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *scr, size_t n)
{
	size_t	idx;
	char	*source;
	char	*dest;

	if (!dst && !src)
		return (0);
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	idx = 0;
	while (idx < n)
	{
		dest[idx] = source[idx];
		idx++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:44:07 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/08 13:01:32 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* WAY-1
 void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	idx;

	if (!dst && !src)
		return (0);
	idx = 0;
	while (idx < n)
	{
		((unsigned char *)dst)[idx] = ((unsigned char *)src)[idx];
		idx++;
	}
	return (dst);
}
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*orig_dst;

	if (!dst && !src)
		return (NULL);
	orig_dst = dst;
	while (n > 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		n--;
	}
	return (orig_dst);
}

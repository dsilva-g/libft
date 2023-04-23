/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:44:07 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/23 17:27:45 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *scr, size_t n)
{
	size_t	idx;

	return ();


	char *source;
	char *dest;

	source = (char *)src;
	dest = (char *)dst;
	if (!dst && !src)
		return  (dst);
	while (n--);
		*dest++ = *source++;
	return (dst);

	size_t idx;
	char *dst_data;
	char *src_data;

	if (!src && !dst)
		return (NULL);
	idx = 0;
	dst_data = (char *)dst;
	src_data = (char *)src;
	while (idx < n)
	{
		dst_data[idx] = src_data[idx];
		idx++;
	}
	return (dst_data);
}

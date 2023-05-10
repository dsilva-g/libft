/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:48:51 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/09 10:49:53 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* WAY-1
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	if (dstsize == 0)
		return (ft_strlen(src));
	idx = 0;
	while (src[idx] && idx < (dstsize - 1))
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ft_strlen(src));
}
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (dstsize == 0)
		return (ft_strlen(src));
	len = 0;
	while (*(src + len) != '\0' && dstsize - 1 > 0)
	{
		*dst = *(src + len);
		dst++;
		len++;
		dstsize--;
	}
	*dst = '\0';
	return (ft_strlen(src));
}

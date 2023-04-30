/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:14:07 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/30 17:08:20 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*	
 *	----TEST OK----
 *	unsigned int		i;
    unsigned char		*tmp;
    unsigned const char *str;

    i = -1;
    tmp = dst;
    str = src;

    if (!dst && !src)
        return (0);

    if (dst < src)
        while (++i < len)
            tmp[i] = str[i];
    else
        while (++i < len)
            tmp[len - 1 - i] = str[len - 1 - i];

    return (dst);
	
 *	----TEST OK----
 *	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else if (src >= dst)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
	*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (src > dst)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

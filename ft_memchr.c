/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:36:25 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/26 09:18:57 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;
	char	*source;

	idx = 0;
	source = (unsigned char *)s;
	while (idx < n)
	{
		if (source[idx] == (unsigned char)c)
			return ((void *)&s[i]);
		idx++;
	}
	return (0);
}

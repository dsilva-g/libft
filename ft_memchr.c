/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:36:25 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/08 12:23:19 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		if (((unsigned char *)s)[idx] == (unsigned char)c)
			return ((void *)(s + idx));
		idx++;
	}
	return (0);
}
*/
/* The memchr() function locates the first occurrence of c
 * (converted to an unsigned char) in string s.
 *
 * The memchr() function returns a pointer to the byte located,
 * or NULL if no such byte exists within n bytes.
 * 
 * s − This is the pointer to the block of memory where the search is performed.
 * 
 * c − This is the value to be passed as an int, but the function performs 
 * a byte per byte search using the unsigned char conversion of this value.
 * 
 * n − This is the number of bytes to be analyzed.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

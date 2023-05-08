/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:30:02 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/08 12:05:07 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		((unsigned char *)b)[idx] = c;
		idx++;
	}
	return (b);
}
*/
/*
 * b − This is a pointer to the block of memory to fill.
 * c − This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
 * len − This is the number of bytes to be set to the value.
 *
 * (len > 0) is the same as (len--)
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:30:02 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/23 17:27:47 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;
	char	*str_b;

	idx = 0;
	str_b = (unsigned char *)b;
	while (idx < len)
	{
		str_b[idx] = c;
		idx++;
	}
	return (b);
}

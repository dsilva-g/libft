/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:28:50 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/30 12:14:08 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)(s + idx));
		idx++;
	}
	if (s[idx] == (unsigned char)c)
		return ((char *)(s + idx));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:37:42 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/30 13:06:13 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == (unsigned char)c)
			return ((char *)(s + idx));
		idx--;
	}
	return (0);
}

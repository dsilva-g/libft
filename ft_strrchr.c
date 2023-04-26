/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:37:42 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/26 08:08:16 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;

	idx = 1 + ft_strlen(s);
	while (s[idx] >= 0)
	{
		if (s[idx] == c)
			return (&s[idx]);
		idx--;
	}
	return (0);
}

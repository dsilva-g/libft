/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:55:39 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/19 13:07:41 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;
	
	if (n > 0)
	{
		while (s1[idx] != s2[idx])
		{
			return (s1[idx] - s2[idx]);
			idx++;
		}
	}
	return (0);
}

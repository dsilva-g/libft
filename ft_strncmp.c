/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:55:39 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/08 11:59:17 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* WAY-1
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n > 0)
	{
		while (idx < n && (s1[idx] != '\0' || s2[idx] != '\0'))
		{
			if (s1[idx] != s2[idx])
				return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
			idx++;
		}
	}
	return (0);
}
*/
/*
 * n - 1 > 0 is the same as --n
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n - 1 > 0 && *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

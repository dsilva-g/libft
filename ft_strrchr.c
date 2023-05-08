/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:37:42 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/08 10:05:07 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* WAY-1
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
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (str);
}

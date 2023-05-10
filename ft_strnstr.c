/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:51:56 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/10 10:48:18 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * !*needdle check value pointed to the pointer is iqual to 0
 * !needle check if the variable pointer is NULL or not. 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	idx;
	unsigned int	idx2;


	if (!*needle)
		return ((char *)haystack);
	idx = 0;
	while (haystack[idx] != '\0' && idx < len)
	{
		idx2 = 0;
		if (haystack[idx] == needle[idx2])
		{
			while (idx + idx2 < len && haystack[idx + idx2] == needle[idx2])
			{
				idx2++;
				if(needle[idx2] == '\0')
					return ((char *)haystack + idx);
			}
		}
		idx++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*to_find;
	size_t	len_cpy;

	if (!*needle)
		return ((char *)haystack);
	while (*needle != '\0' && len--)
	{
		if (*haystack == *needle)
		{
			str = (char *)haystack + 1;
			to_find = (char *)needle + 1;
			len_cpy = len;		
			while (*str && *to_find && *str == *to_find && len_cpy--)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
*/

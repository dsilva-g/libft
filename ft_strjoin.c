/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:11:55 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/10 15:57:55 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = (strlen(s1) + strlen(s2) + 1);
	join = ft_calloc(len, sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, strlen(s1) + 1);
	ft_strlcpy(join + strlen(s1), s2, len);
	return (join);
}

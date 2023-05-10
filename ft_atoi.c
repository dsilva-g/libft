/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:42:52 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/10 11:00:33 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	check_sign(const char *str, unsigned int idx, int *is_neg)
{
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			*is_neg = -1;
		idx++;
	}
	return (idx);
}

int			ft_atoi(const char *str)
{
	unsigned int			idx;
	int						is_neg;
	long long				res;

	idx = 0;
	is_neg = 1;
	res = 0;
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n' ||
			str[idx] == '\v' || str[idx] == '\f' || str[idx] == '\r')
		idx++;
	idx = check_sign(str, idx, &is_neg);
	while (str[idx])
	{
		if (str[idx] < 48 || str[idx] > 57)
			break ;
		else
			res = (res * 10) + str[idx] - 48;
		idx++;
	}
	return (res * is_neg);
}


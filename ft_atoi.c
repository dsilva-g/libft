/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:42:52 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/01 14:31:51 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *str, int i, int *is_neg)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*is_neg = -1;
		i++;
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	int			i;
	int			is_neg;
	long long	res;

	i = 0;
	is_neg = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	i = check_sign(str, i, &is_neg);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			break ;
		else
			res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * is_neg);
}


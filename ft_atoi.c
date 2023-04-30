/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:42:52 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/04/30 17:50:40 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	index;
	int	number_sign;

	index = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v' \
			|| str[index] == '\f' || str[index] == '\r' \
			|| str[index] == ' ')
		index++;
	number_sign = 1;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			number_sign = number_sign * -1;
		index++;
	}
	result = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (result * number_sign);
}

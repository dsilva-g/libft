/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:38 by dsilva-g          #+#    #+#             */
/*   Updated: 2023/05/09 12:27:59 by dsilva-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    printf("Original \n");
    ptr = strnstr(largestring, smallstring, 7);
    printf("Test\n%s\n", ptr);
    printf("ft_ \n");
    ptr = ft_strnstr(largestring, smallstring, 7);
    printf("Test\n%s\n", ptr);
    return 0;
}

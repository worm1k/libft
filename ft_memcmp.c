/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abykov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:07:28 by abykov            #+#    #+#             */
/*   Updated: 2016/11/21 14:07:29 by abykov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if(!n)
        return (0);

    while(n-- && *(char*)s1 == *(char*)s2 ) {
        s1 = (char*)s1 + 1;
        s2 = (char*)s2 + 1;
    }

    return (*((unsigned char*)s1) - *((unsigned char*)s2));
}
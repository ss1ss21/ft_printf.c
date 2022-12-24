/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhXa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:00:18 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/24 18:44:12 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int   ft_printer(int a, const char b)
{
    if(a <= 9)
       return ft_printputchar(a + 48);
    else if(b == 'x')
        return (ft_printputchar(a + 87));
    else if(b == 'X')
        return ft_printputchar(a + 55);
    else
        return(8);
}

int ft_printhxa(unsigned int x, const char a)
{
    int i;

    i = 0;
    if(x >= 16)
    {
        i += ft_printhxa((x / 16), a);
        i += ft_printer((x % 16), a);
    }
    else
        i += ft_printer(x, a);
    return(i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dontgu <dontgu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:40:30 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/22 14:08:04 by dontgu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int process(va_list l,char frmt)
{
	int a;

	a = 0;
    if(frmt == 'c')
        a += ft_printputchar(va_arg(l, int));
	if(frmt == 's')
		a += ft_printputstr(va_arg(l, char *));
	if(frmt == '%')
		a += ft_printputchar('%');
	if(frmt == 'd')
		a += ft_printputnbr(va_arg(l, int));	
	if(frmt == 'p')
	{
		a += ft_printputstr("0x");
		a += ft_printptr(va_arg(l, unsigned long long));
	}
	return(a);
}

int ft_printf(const char *str, ...)
{
    va_list a_list;
    int i;
    int a;
    
	a = 0;
    i = 0;
    va_start(a_list, str);
    
    while(str[i])
    {
        if(str[i] == '%' && str[++i])
            a += process(a_list, str[i++]);
        else
        {
            a += ft_printputchar(str[i++]);
        }         
    }
    return(a);
}

int main()
{
	char *a;
	char *b;
	
	b = malloc(34);
	a = malloc(100);
	printf("%d\n", printf("char%c\n", 's'));
	printf("%d\n", ft_printf("char%c\n", 's'));
	
	printf("%d\n", printf("string%s\n", "heheh"));
	printf("%d\n", ft_printf("string%s\n", "heheh"));
	
	printf("%d\n", printf("yüzde%%\n"));
	printf("%d\n", ft_printf("yüzde%%\n"));
	
	printf("%d\n", printf("intager%d\n", -987654321));
	printf("%d\n", ft_printf("intager%d\n", -987654321));
	printf("----------\n");
	printf("%d\n", ft_printf("pointer%p\n", a));
	printf("%d\n", printf("pointer%p\n", a));
	
	printf("%d\n", ft_printf("pointer%p\n", b));
	printf("%d\n", printf("pointer%p\n", b));
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:12:37 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/21 20:33:37 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H 

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int		ft_printputnbr(int nb);
int		ft_printputchar(char c);
int		ft_printputstr(char *str);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int 	ft_printptr(unsigned long long x);

#endif
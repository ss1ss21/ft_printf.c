/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printputnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:18:51 by ssonmez           #+#    #+#             */
/*   Updated: 2022/12/24 18:44:03 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

int	ft_printputnbr(int nb)
{
	int b;
	int i;

	i = 1;
	if (nb < 0)
	{
		ft_putchr('-');
		nb = -nb;
		i++;
	}
	b = nb;
	while(b >= 10)
	{
		b = b / 10;
		i++;
	}
	if (nb >= 10)
	{
		ft_printputnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) 
		ft_putchr(nb + 48);
	return(i);
}


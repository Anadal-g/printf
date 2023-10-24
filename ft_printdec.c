/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:49:53 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/06 12:24:08 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(int nb)
{
	int	count;

	count = 0;
	if (nb == INT_MIN)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_printdec(nb / 10);
	}
	count += ft_putchar('0' + (nb % 10));
	return (count);
}

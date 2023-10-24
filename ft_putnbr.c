/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:35:28 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/04 15:32:29 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putnbr((nb / 10));
		count += ft_putchar('8');
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr((nb / 10));
		count += ft_putchar(('0' + nb % 10));
	}
	return (count);
}

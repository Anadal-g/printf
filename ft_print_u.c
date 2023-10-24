/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:20:52 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/07 17:49:55 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int			count;
	long int	num;

	count = 0;
	num = nb;
	if (nb > 9)
	{
		count += ft_print_u(num / 10);
		count += ft_putchar((num % 10) + '0');
	}
	else
		count += ft_putchar ('0' + (num % 10));
	return (count);
}

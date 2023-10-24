/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:05:36 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/05 13:33:48 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		return (ft_putstr("(null)"));
	}
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

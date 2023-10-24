/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:20 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/07 17:55:59 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned int num, int flag)
{
	int		count;
	char	*base;

	count = 0;
	if (!flag)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num < 16)
		count += ft_putchar(base[num]);
	else
	{
		count += ft_printhexa(num / 16, flag);
		count += ft_printhexa(num % 16, flag);
	}
	return (count);
}

int	ft_printhexalong(unsigned long num)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (num < 16)
		count += ft_putchar(base[num]);
	else
	{
		count += ft_printhexalong(num / 16);
		count += ft_printhexalong(num % 16);
	}
	return (count);
}

int	ft_printpointer(void *ptr)
{
	int				count;
	unsigned long	num;

	count = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	num = (unsigned long)ptr;
	count = ft_putstr("0x");
	count += ft_printhexalong(num);
	return (count);
}
/*
int	ft_hex_convert(unsigned long hex, char *str)
{

	int	count;

	count = 0;
	if (hex > 15)
	{
		count += ft_hex_convert(hex / 16, str);
		count += ft_hex_convert(hex % 16, str);
	}
	else
	
	return (count);
}

int	ft_hex_len(unsigned long hex)
{
	int	count;

	count = 0;
	while (hex > 0)
	{
		hex = hex / 16;
		count++;
	}
	return (count);
}

int	ft_print_ptr(void *arg)
{
	int				count;
	char			*str;
	unsigned long	hex_value;

	hex_value = (unsigned long)arg;
	count = 0;
	str = "0123456789abcdef";
	count += write (1, "0x", 2);
	if (arg == NULL)
	{
		count += write(1, "0", 1);
		return (3);
	}
	else
	{
		count += ft_hex_convert(hex_value, str);
		return (count + 2);
	}
}*/

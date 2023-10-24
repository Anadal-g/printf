/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:29:32 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/12 12:20:37 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(va_list arg, char *specifier)
{
	int	count;

	count = 0;
	if (*specifier == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (*specifier == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (*specifier == 'p')
		return (ft_printpointer(va_arg(arg, void *)));
	else if (*specifier == 'd' || *specifier == 'i')
		return (ft_printdec(va_arg(arg, int)));
	else if (*specifier == 'u')
		return (ft_print_u(va_arg(arg, unsigned int)));
	else if (*specifier == 'x')
		return (ft_printhexa(va_arg(arg, unsigned int), 0));
	else if (*specifier == 'X')
		return (ft_printhexa(va_arg(arg, unsigned int), 1));
	else if (*specifier == '%')
		return ((ft_putchar('%')));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t	counter;

	va_start (arg, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += print_format(arg, (char *)format);
		}
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(arg);
	return (counter);
}

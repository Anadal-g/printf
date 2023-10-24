/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:43:19 by anadal-g          #+#    #+#             */
/*   Updated: 2023/10/07 17:37:02 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_putstr(char *str);
int		ft_printdec(int nb);
int		ft_print_u(unsigned int nb);
int		ft_printpointer(void *ptr);
//int		ft_print_x(unsigned int arg);
//int		ft_print_upperx(unsigned int arg);
int		ft_printhexa(unsigned int num, int flag);
int		ft_printhexalong(unsigned long num);

#endif
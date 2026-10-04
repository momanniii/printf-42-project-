/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 23:09:04 by abalmoma          #+#    #+#             */
/*   Updated: 2026/10/01 21:29:42 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_format(char d, va_list l);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_unsigned(unsigned int nb);
int	ft_puthexa(unsigned long nb, char *p);
int	ft_print_ptr(unsigned long ptr);

#endif

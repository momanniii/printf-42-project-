/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:44:13 by abalmoma          #+#    #+#             */
/*   Updated: 2026/10/02 00:23:01 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(char d, va_list l)
{
	int	c;

	c = 0;
	if (d == 'c')
		c += ft_putchar(va_arg(l, int));
	else if (d == 's')
		c += ft_putstr(va_arg(l, char *));
	else if (d == 'd')
		c += ft_putnbr(va_arg(l, int));
	else if (d == 'i')
		c += ft_putnbr(va_arg(l, int));
	else if (d == 'u')
		c += ft_unsigned(va_arg(l, unsigned int));
	else if (d == 'x')
		c += ft_puthexa(va_arg(l, unsigned int), "0123456789abcdef");
	else if (d == 'X')
		c += ft_puthexa(va_arg(l, unsigned int), "0123456789ABCDEF");
	else if (d == 'p')
		c += ft_print_ptr(va_arg(l, unsigned long));
	else if (d == '%')
		c += ft_putchar('%');
	return (c);
}

int	ft_printf(const char *str, ...)
{
	va_list	a;
	int		i;
	int		count;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	va_start(a, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
		else if (str[i++] == '%')
		{
			count += ft_format(str[i], a);
			i++;
		}
	}
	va_end(a);
	return (count);
}

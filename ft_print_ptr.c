/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:41:22 by abalmoma          #+#    #+#             */
/*   Updated: 2026/10/01 21:29:21 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	c;

	c = 0;
	if (!ptr)
	{
		c += write(1, "(nil)", 5);
		return (c);
	}
	else
		c += write(1, "0x", 2);
	c += ft_puthexa(ptr, "0123456789abcdef");
	return (c);
}

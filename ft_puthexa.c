/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:31:22 by abalmoma          #+#    #+#             */
/*   Updated: 2026/10/01 21:28:52 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexa(unsigned long nb, char *p)
{
	int	c;

	c = 0;
	if (nb >= 16)
		c += ft_puthexa(nb / 16, p);
	c += ft_putchar(p[(nb % 16)]);
	return (c);
}

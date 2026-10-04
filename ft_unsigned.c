/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 22:33:48 by abalmoma          #+#    #+#             */
/*   Updated: 2026/09/30 23:57:37 by abalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	c;

	c = 0;
	if (nb >= 10)
		c += ft_unsigned(nb / 10);
	c += ft_putchar((nb % 10) + '0');
	return (c);
}

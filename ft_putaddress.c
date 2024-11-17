/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:07:29 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:07:31 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fill_buffer(unsigned long b, char *buffer, const char *src)
{
	int	i;

	i = 0;
	while (b)
	{
		buffer[i++] = src[b % 16];
		b /= 16;
	}
	buffer[i++] = 'x';
	buffer[i++] = '0';
	return (i);
}

int	ft_putaddress(void *p)
{
	char			buffer[17];
	const char		*src = "0123456789abcdef";
	unsigned long	b;
	int				i;
	int				counter;

	b = (unsigned long)p;
	if (!p)
		return (write(1, "(nil)", 5));
	i = fill_buffer(b, buffer, src);
	counter = 0;
	while (--i >= 0)
		counter += ft_putchar(buffer[i]);
	return (counter);
}

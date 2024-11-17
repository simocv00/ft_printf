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

static char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_putaddress(void *p)
{
	int				i;
	int				counter;
	char			src[16];
	char			buffer[17];
	unsigned long	b;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_strcpy(src, "0123456789abcdef");
	i = 0;
	counter = 0;
	b = (unsigned long)p;
	while (b)
	{
		buffer[i] = src[b % 16];
		b /= 16;
		i++;
	}
	buffer[i++] = 'x';
	buffer[i++] = '0';
	while (--i >= 0)
		counter += ft_putchar(buffer[i]);
	return (counter);
}

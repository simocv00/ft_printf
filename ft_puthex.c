/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:08:12 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:08:15 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_change(int nb, char *str)
{
	while (nb < 16)
	{
		str[nb] -= 32;
		nb++;
	}
}

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

int	ft_puthex(unsigned int nb, char X)
{
	int		i;
	char	copy[16];
	int		counter;
	char	finder[16];

	ft_strcpy(finder, "0123456789abcdef");
	i = 0;
	counter = 0;
	if (X == 'X')
		ft_change(10, finder);
	if (nb == 0)
		return (ft_putchar('0'));
	while (nb)
	{
		copy[i] = finder[nb % 16];
		i++;
		nb /= 16;
	}
	while (--i >= 0)
		counter += ft_putchar(copy[i]);
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:08:39 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:08:42 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	counter;

	counter = 0;
	if (nb == -2147483648)
	{
		counter += ft_putstr("-2147483648");
		return (counter);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		counter++;
		nb = -nb;
	}
	if (nb > 9)
	{
		counter += ft_putnbr(nb / 10);
		counter += ft_putnbr(nb % 10);
	}
	if (nb <= 9 && nb >= 0)
		counter += ft_putchar(nb + 48);
	return (counter);
}

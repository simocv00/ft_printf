/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:09:29 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:09:33 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_utnbr(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb > 9)
	{
		counter += ft_utnbr(nb / 10);
		counter += ft_utnbr(nb % 10);
	}
	else if (nb <= 9)
		counter += ft_putchar(nb + 48);
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:08:57 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:09:00 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!str)
	{
		counter += ft_putstr("(null)");
		return (counter);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		counter++;
	}
	return (counter);
}

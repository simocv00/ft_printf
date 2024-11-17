/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:06:39 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:06:42 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	handle_format(const char format, va_list args)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 'u')
		return (ft_utnbr(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_putaddress(va_arg(args, void *)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (ft_putchar(format));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	counter;

	counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			counter += handle_format(*(++format), args);
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (counter);
}

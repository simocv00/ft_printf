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

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	counter;

	counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				counter += ft_putnbr(va_arg(args, int));
			}
			else if (*format == 's')
				counter += ft_putstr(va_arg(args, char *));
			else if (*format == 'c')
				counter += ft_putchar(va_arg(args, int));
			else if (*format == 'u')
				counter += ft_utnbr(va_arg(args, unsigned int));
			else if (*format == 'x' || *format == 'X')
				counter += ft_puthex(va_arg(args, unsigned int), *format);
			else if (*format == 'p')
				counter += ft_putaddress(va_arg(args, void *));
			else if (*format == '%')
				counter += ft_putchar('%');
			else
				counter += ft_putchar(*format);
		}
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (counter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:06:52 by melayyad          #+#    #+#             */
/*   Updated: 2024/11/17 15:06:55 by melayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putaddress(void *p);
int	ft_putchar(char c);
int	ft_puthex(unsigned int nb, char X);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_utnbr(unsigned int nb);
#endif

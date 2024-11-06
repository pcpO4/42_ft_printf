/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:45:59 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 12:05:10 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(const char format, va_list args)
{
	int	valor;

	valor = 0;
	if (format == '%')
		valor += ft_printporc();
	else if (format == 'c')
		valor += ft_printchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		valor += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		valor += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		return (ft_printhex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		valor += ft_printptr(va_arg(args, uintptr_t));
	else if (format == 's')
		valor += ft_printstr(va_arg(args, char *));
	return (valor);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		valor;
	int		i;

	i = 0;
	valor = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			valor += ft_check(format[i + 1], args);
			i++;
		}
		else
			valor += ft_printchar(format[i]);
		++i;
	}
	va_end(args);
	return (valor);
}

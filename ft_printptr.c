/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 13:23:05 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		++len;
	}
	return (len);
}

void	putptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		putptr(ptr / 16);
		putptr(ptr % 16);
	}
	else
	{
		if (ptr >= 10)
			ft_printchar((ptr - 10) + 'a');
		else
			ft_printchar(ptr + '0');
	}
}

int	ft_printptr(uintptr_t ptr)
{
	int	valor;

	valor = 0;
	if (ptr == 0)
	{
		return (write(1, "(nil)", 5));
	}
	valor += write(1, "0x", 2);
	valor += ft_len(ptr);
	putptr(ptr);
	return (valor);
}

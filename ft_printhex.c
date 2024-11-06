/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:09:03 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 11:27:52 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//el valor que devuelve depende de el numero de cifras del numero(hex)

void	ft_printh(char c)
{
	if (0 <= c && c <= 9)
		ft_printnbr(c);
	else
		ft_printchar(c);
}

int	ft_printmay(int c)
{
	int		valor;
	char	*dict;
	int		num;

	dict = "0123456789ABCDEF";
	valor = 0;
	num = c;
	while (num >= 16)
	{
		num = num / 16;
		++valor;
	}
	ft_printh(dict[num]);
	num = c;
	while (num >= 16)
	{
		num = num % 16;
		++valor;
	}
	ft_printh(dict[num]);
	return (valor);
}

int	ft_printmin(int c)
{
	int		valor;
	char	*dict;
	int		num;

	dict = "0123456789abcdef";
	valor = 0;
	num = c;
	while (num >= 16)
	{
		num = num / 16;
		++valor;
	}
	ft_printh(dict[num]);
	num = c;
	while (num >= 16)
	{
		num = num % 16;
		++valor;
	}
	ft_printh(dict[num]);
	return (valor);
}

int	ft_printhex(unsigned int c, const char format)
{
	if (format == 'x')
		return (ft_printmin(c));
	else if (format == 'X')
		return (ft_printmay(c));
	return (-1);
}

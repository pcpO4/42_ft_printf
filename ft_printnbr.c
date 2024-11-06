/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:16:13 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:17 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	valor;

	valor = 0;
	if (n < 0)
	{
		ft_printchar('-');
		if (n == -2147483648)
		{
			write(1, "2147483648", 11);
			return (11);
		}
		n = -n;
	}
	if (n > 9)
	{
		valor += ft_printnbr(n / 10);
		valor += ft_printchar(n % 10 + '0');
	}
	else
		valor += ft_printchar(n + '0');
	return (valor);
}

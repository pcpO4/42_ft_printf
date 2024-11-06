/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:16:13 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 13:35:50 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	valor;

	valor = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			return (ft_printstr("-2147483648"));
		}
		ft_printchar('-');
		valor = 1;
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

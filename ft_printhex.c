/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:09:03 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 17:47:53 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//el valor que devuelve depende de el numero de cifras del numero(hex)

int	ft_print_hex(unsigned int nr, char *dict)
{
	int		diccionario[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nr == 0)
		result += ft_printchar('0');
	while (nr)
	{
		diccionario[i] = nr % 16;
		nr = nr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_printchar(dict[diccionario[i]]);
	return (result);
}
